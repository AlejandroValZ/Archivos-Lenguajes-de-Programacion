#Basico
for x in range(1, 151):
    print(x)

#Multiplos de 5
cont = 5
while cont < 1001:
    if cont % 5 == 0:
        print(cont)
    cont += 1

#Contar
for x in range(1,101):
    if x % 10 == 0:
        print("Hola Mundo")
    elif x % 5 == 0:
        print("Hola")
    else:
        print(x)

#Enteros impares
sum = 0
for x in range(0,500000):
    if x % 2 != 0:
        sum += x
print(sum)

#Cuenta regresiva por 4
for x in range(2018,0,-4):
    print(x)

#Contador Flexible
lowNum = 2
highNum = 9
mult = 3
for x in range(lowNum, highNum+1):
    if x % mult == 0:
        print(x)
