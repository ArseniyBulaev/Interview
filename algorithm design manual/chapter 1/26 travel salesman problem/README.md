# Эвристика ближайшего соседа
Вроде реализовал
# Ближайшие пары
## Первая попытка (крах)
Пытался хранить связи в цепочках через словарь и рекурсивно определять принадлежит ли вновь соединяемая точка к одной из существующих цепей. Не получилось...
Рекурсия бесконечно прыгает в одной паре соединённых точек (Типо, если точки (1,0) и (0,0) связаны , то будет (1, 0) ->  (0,0) -> (1, 0) ->  (0,0) ->  и т.д)
## Вторая попытка 
Храним цепочки как словори связей. Изначально у нас столько же словарей сколько и точек.