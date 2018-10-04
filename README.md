# Лабораторные работы по дисциплине "Алгоримты и структуры данных". Осень 2018

## Правила работы с репозиторием

- Для начала работы каждый студент делает форк репозитория на свой GitHub аккаунт (нажимает на кнопочку fork в правом верхнем углу). После этого заходит в этот форк на своём аккаунте и клонирует его к себе на компьютер.
- Для каждой лабораторной создается **свой отдельный branch** (checkout -b < ####\_FirstIO\_lab# > )
- Каждый студент работает строго в своей директории ####/FirstIO/ , где #### - номер группы, а FirstIO - название директории в формате ФамилияИО
- После внесения всех изменений, они отправляются на серевер в форк студента, и уже с него следует делать pull-request в оснон=вной репозиторй
- Для каждой лабораторной требуется создавать отдельную директорию lab#, где # - номер лабораторной. Курсовая работа заливается в директрию course_work
- Внутри папки с названием должны находиться:
    * Исходный код программ в папке Source
    * Тестовые данные в папке Tests
    * makefile или скрипт командной строки для получения исполняемого файла с названием lab# (.exe для Windows) в корневой папке
    * скрипт командной строки или что-либо другое для возможности запуска всех тестов из папки Tests одной командой
- Внутри папки с названием не должны находиться:
    * файлы с выводом программы
    * аниме-картинки и другие изображения
    * всё остальное
- Для проверки лабораторной работы создается pull-request из Вашей ветки с лабораторной работой в master-ветку общего репозитория. В начале заголовка пул-реквеста студент **сам пишет** статус готовности (о них ниже), После - ФамилияИО, после - lab#
- В описании к пулл-реквесту **номер выбранного варианта**
- Возможные статусы:
    * [CODE READY]  - код программы окончательно написан и готов к проверке (залит в первый раз)
    * [CODE FIX]    - требуются исправления замечений в коде и/или ответы на некоторые вопросы
    * [CODE FIXED]  - замечания по коду исправлены и ожидают проверки
    * [CODE ACCEPT] - код принят к очной сдаче (на очной сдаче будут заданы вопросы)
    * [CODE PASSED] - код принят, получены корректные ответы на заданные в ходе (очной) сдачи вопросы
    * 
    * [TESTS READY]  - в папке Tests находятся тесты, которые программа успешно проходит (залит в перый раз)
    * [TESTS FIX]    - требуюся дополнительные тесты и/или проходятся неверно
    * [TESTS FIXED]  - замечания по тестам исправлены и ожидают проверки
    * [TESTS ACCEPT] - тесты приняты к (за)очной сдаче
    * [TESTS PASSED] - тесты прошли защиту на (за)очной сдаче
- Статусы могут комбинироваться, например: [CODE FIX] [TESTS FIXED] 
- Напоминание: коммиты в ветку, которую студент отправляет на пул-реквест отображаются в самом пул-реквесте. **Делать новый пул-реквест не надо.**
- Закончив исправления, студент пишет об этом отдельным комментарием, указывая, возможно, пояснения к исправлениям, а так же меняет **сам** префикс заголовка пул-реквеста на [FIXED]

## Замечения об очной сдаче работ и слиянии сданных работ


## Таблица сдачи и приема работ студентов

### Группа 7381

| №| ФамилияИО    | GitHub-аккаунт |  lab1   |  lab2   |  lab3   |  lab4   |  lab5   | course_work |
| -| -------------| ---------------| ------- | ------- | ------- | ------- | ------- | ----------- |
| 1| АдамовЯ      | yaroslavadamov |4уяекатфt|         |         |         |         |             | 
| 2| АженилокВ    |                |         |         |         |         |         |             | 
| 3| АлясоваА     |                |         |         |         |         |         |             | 
| 4| Вологди́нМ    | Makkksx        |4уяекt   |3е       |         |         |         |             | 
| 5| ГабовЕ       | GabovYegor     |4афктуяеt|1фуяек   |         |         |         |             | 
| 6| ДорохС       | PrimeBR        |3еуякt   |         |         |         |         |             | 
| 7| ИльясовА     | IlyasovAnton   |3уяе     |         |         |         |         |             | 
| 8| КортевЮ      | YuriyKortev    |4уяекафтt|         |         |         |         |             | 
| 9| КревчикА     | Angelina151612 |4 кафтуt |         |         |         |         |             | 
|10| КушкоеваА    |                |4аф      |         |         |         |         |             | 
|11| ЛауцюсМ      | -------------- |    -    |    -    |    -    |    -    |    -    |      -      | 
|12| ЛукашевР     | NovelCoZ       |4фтяуtкаe|         |         |         |         |             | 
|13| МашинаЮ      | YMashina       |4уяекафтt|         |         |         |         |             | 
|14| МинуллинМ    | Fikafusik      |4еяуакфтt|4афктуяе |2аткеу   |         |         |             | 
|15| ПавловА      |                |4афктуяеt|         |         |         |         |             | 
|16| ПроцветкинаА | ana24stasiya   |4афуекt  |3афктуяе |         |         |         |             | 
|17| СудаковаП    |                |         |         |         |         |         |             | 
|18| Тарасе́нкоЕ   |                |         |         |         |         |         |             | 
|19| ТрушниковА   | AndersonGH     |4афктуяеt|         |         |         |         |             | 


### Группа 7382

| №| ФамилияИ    | GitHub-аккаунт |  lab1   |  lab2   |  lab3   |  lab4   |  lab5   | course_work | 
| -| ------------| -------------- | ------- | ------- | ------- | ------- | ------- | ----------- | 
| 1| БахеровД    |                |         |         |         |         |         |             | 
| 2| ГавриловА   | AndrewGavril   |4афктуяеt|0+уек    |         |         |         |             | 
| 3| ГиззатовА   | Gizzatovamir   |4уяеактt |         |         |         |         |             | 
| 4| ГлазуновС   | light5551      |4афктуеt |4афктуе  |0+уек    |         |         |             | 
| 5| ГоловинаЕ   | kate2513       |3уекаt   |         |         |         |         |             | 
| 6| ГосударкинЯ | DarkFlink      |4афктуяеt|1        |4афтекя  |         |         |             | 
| 7| ДавкаеваВ   | DavkaevaV      |4афктуяеt|         |         |         |         |             | 
| 8| ДерябинаП   | Cocosss        |4афеукятt|         |         |         |         |             | 
| 9| ДроздА      |                |         |         |         |         |         |             | 
|10| ЕрёменкоА   | annamenko      |4катуефt |         |         |         |         |             | 
|11| ИсаевР      |                |         |         |         |         |         |             | 
|12| КравченкоП  |                |         |         |         |         |         |             | 
|13| КузьминА    |                |         |         |         |         |         |             | 
|14| ЛенковскийВ |                |         |         |         |         |         |             | 
|15| Ляще́вскаяА  | Anastasiyalp   |4афктуяеt|         |         |         |         |             | 
|16| НаходькоА   |                |         |         |         |         |         |             | 
|17| ПетроваА    | aaapetrova     |4афктуяеt|         |         |         |         |             | 
|18| ТокаревА    |                |         |         |         |         |         |             | 


### Легенда
- Первая цифра - Очки (от 0 до 4). Выставляются только на очных занятиях (кроме случая ниже)
- Статус выполненной предварительной сдачи - "0+" или "1+" (если выполнялась удалённая сдача). Успешная сдача бета-версии на занятии - "б+". Неудачная сдача бета-версии на занятии - "б-".
- Плюсики заочные:
    * у - удобство использования
    * я - ясность выводмой информации
    * е - качество кода
    * к - комментарии в исходном коде и их адекватность 
- Плюсики очные (в отчёте):
    * а - описание алгоритма
    * ф - описание функций и структур данных
    * т - тестирование
## Контакты

