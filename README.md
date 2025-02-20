# lab-1
1. Создание репозитория lab-1 на GitHub
2. Клонтрование созданного репозитория на локальный компьютер(на рабочий стол) :
  $ cd C:/Users/Lenovo/Desktop
  $ git clone https://github.com/sofyaming/lab-1.git
3. Переход в папку lab-1
  $ cd lab-1
4. Создание в корне репозитория директорию src
5. Создание двух файлов в директории src: main.cpp(содержит функцию main, которая использует функции из utils.cpp) и utils.cpp(содержит функции сложения и вычитания)
6. Создание файла CMakeLists.txt в корне репозитория
7. Добавление всех файлов в репозиторий
  $ git add src/main.cpp src/utils.cpp CMakeLists.txt
8. Первый коммит
  $ git commit -m "Initial commit: CMake project setup"
9. Создание новой ветки с именем feature-utils
  $ git branch feature-utils
10. Добавление в utils.cpp функции умножения в ветке feature-utils и обновление main.cpp
  $ git checkout feature-utils
  $ git add src/main.cpp src/utils.cpp
11. Коммит изменений в ветке feature-utils
  $ git commit -m "feat: Add multiplication function to utils"
12. Переход на основную ветку
  $ git checkout main
13. Внесение изменений в main.cpp(изменения вывода программы)
  $ git add src/main.cpp
14. Коммит изменений
  $ git commit -m "fix: Update main output message in main branch"
15. Слияние ветки feature-utils в основную вутку
  $ git merge feature-utils
16. Разрешение конфликтов
    Auto-merging src/main.cpp
    CONFLICT (content): Merge conflict in src/main.cpp
    Automatic merge failed; fix conflicts and then commit the result.
  a). Открыть Редактор Слияния в Microsoft Visual Studio
  b). Просмотреть конфликтующие строки, решить оставить левую сторону, пометив галочкой
  с). Выбрать Принять Слияние
17. Коммит результата слияния
  $ git commit -m "Fix merging conflicts"
18. Отправка всех веток и коммитов в удалённый репозиторий
    $ git push --all origin
