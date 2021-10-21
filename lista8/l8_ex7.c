#include <stdio.h>

int main()
{
    int len = 15, even[5], odd[5], index = 0, i = 0, i_even = 0, i_odd = 0, value;

    while (index < len)
    {
        scanf(" %d", &value);

        if (value % 2 == 0)
        {
            even[i_even] = value;
            i_even++;
        }
        else
        {
            odd[i_odd] = value;
            i_odd++;
        }

        // odd check and print
        if (i_odd == 5 || index == 14)
        {
            for (i = 0; i < i_odd; i++)
            {
                printf("impar[%d] = %d\n", (i), odd[i]);
            }

            i_odd = 0;
        }

        // even check and print
        if (i_even == 5 || index == 14)
        {
            for (i = 0; i < i_even; i++)
            {
                printf("par[%d] = %d\n", (i), even[i]);
            }

            i_even = 0;
        }

        index++;
    }

    return 0;
}
