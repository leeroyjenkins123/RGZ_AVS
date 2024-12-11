pipeline {
    agent any

    environment {
        GIT_REPO = 'https://github.com/leeroyjenkins123/RGZ_AVS.git'
        BRANCH_NAME = 'main'  // Убедитесь, что указана правильная ветка
    }

    stages {
        stage('Checkout') {
            steps {
                // Клонируем репозиторий и проверяем нужную ветку
                checkout scm
            }
        }

        stage('Get Changed Files') {
            steps {
                script {
                    // Получаем список измененных файлов в последнем коммите
                    def changes = sh(script: "git diff --name-only HEAD~1 HEAD", returnStdout: true).trim()
                    if (changes) {
                        echo "Changed files: ${changes}"

                        // Выводим содержимое каждого измененного файла
                        changes.split("\n").each { file ->
                            echo "Contents of ${file}:"
                            // Проверяем, существует ли файл, прежде чем выводить его содержимое
                            if (fileExists(file)) {
                                sh(script: "cat ${file}", returnStdout: true).eachLine { line ->
                                    echo line
                                }
                            } else {
                                echo "File ${file} not found in the repository."
                            }
                        }
                    } else {
                        echo "No changes detected in the last commit."
                    }
                }
            }
        }
    }

    post {
        always {
            echo 'Pipeline execution finished.'
        }
    }
}
