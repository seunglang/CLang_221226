#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];              
    int length;                 
    bool checkWord = true;    

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word);    

 
    for (int i = 0; i < length / 2; i++)
    {
        
        if (word[i] != word[length - 1 - i])
        {
            
            checkWord = false;
            break;
        }
    }

    if (checkWord) {
        printf("\"%s\" : ȸ���Դϴ�! ", word);
    }
    else {
        printf("\"%s\" : ȸ���� �ƴմϴ�! ", word);
    }

    return 0;
}