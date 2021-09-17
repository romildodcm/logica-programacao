template = """#include <stdio.h>
#include <math.h>

int main()
{

    return 0;
}
"""

nome_da_lista = "l3_ex"
tipo = ".c"
numero_exercicios = 10

for x in range(numero_exercicios):
    file_name = nome_da_lista+str(x+1)+tipo
    arquivo = open(file_name, "a")
    arquivo.write(template)