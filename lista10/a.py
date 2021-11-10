template = """#include <stdio.h>
#include <string.h>

int main()
{

    return 0;
}
"""

nome_da_lista = "l10_ex"
tipo = ".c"
numero_exercicios = 6

print("ok")

for x in range(numero_exercicios):
    file_name = nome_da_lista+str(x+1)+tipo
    arquivo = open(file_name, "a")
    arquivo.write(template)


'''
. . . .
. . . .
. . . .
. . . .

'''