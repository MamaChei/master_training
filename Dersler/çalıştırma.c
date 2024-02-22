#include <stdio.h>
#include <string.h>

void fonction(int *a,int *b)
{
    int c;
    c=*b;
    *b=*a;
    *a=c;

}



int sum(int *a, int len) {
    int toplam=0;

    for(int i=0;i<len;i++)
    {
        toplam+=a[i];
        printf("%d,%p\n",i,&a[i]);
    }
    return toplam;
}


int isLower(char a) {
    return (a >= 97 && a <= 122);
}

int isUpper(char a){
    if(a>=65 && a<='Z')
    {
        return 1;
    }
    return 0;
}

void Bigsmall(char *str) {
    int i=0;
    while(str[i])
    {
        if (i%2==0) {
            /*str[i] -> kucuk is buyut, buyuk ve baska bir ascci degeri var ise dokunma.*/
            if(isLower(str[i]))
            {
                str[i]-=32;
            }
            

        }
        else {
            //str[i] ->buyuk ise kucult ||
            if(isUpper(str[i]))
            {
                str[i]+=32;
            }
        }
        printf("%c",str[i]);
        i++;
    }
}

int main() {

    while (1) {
        printf("Bisey yaz yada q ya bas kapatmak icin.\n");
        char myString[100];
        scanf("%s",myString);
        if (strlen(myString) == 1 && myString[0] == 'q')
            break;
        else 
            printf("%s\n",myString);
    }
    return (0);
}