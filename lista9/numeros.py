template = """#include <stdio.h>
#include <math.h>

int main()
{

    return 0;
}
"""

numero_exercicios = 10

print("ok")

for x in range(numero_exercicios):
    template = str(x)

nome_da_lista = "numeros"
tipo = ".txt"
numero_exercicios = 10

print("ok")

file_name = nome_da_lista+str(x+1)+tipo
arquivo = open(file_name, "a")
arquivo.write(template)
