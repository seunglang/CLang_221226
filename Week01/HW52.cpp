#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];              
    int length;                 
    bool checkWord = true;    

    printf("단어를 입력하세요: ");
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
        printf("\"%s\" : 회문입니다! ", word);
    }
    else {
        printf("\"%s\" : 회문이 아닙니다! ", word);
    }

    return 0;
}