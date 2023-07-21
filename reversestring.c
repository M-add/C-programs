#include <stdio.h>
#include <string.h>
void swap(char *a, int i, int j)
{
    char ch = a[i];
    a[i] = a[j];
    a[j] = ch;
}
void reverseText(char *text, int begin, int end)
{
    while (begin < end)
    {
        swap(text, begin++, end--);
    }
}
void reverse_text(char *text)
{
    int low = 0, high = 0;
    int n = strlen(text);
    
    for (int i = 0; i < n; i++)
    {
        if (text[i] == ' ')
        {
            reverseText(text, low, high);
            low = high = i + 1;
        }
        else
        {
            high = i;
        }
    }
    reverseText(text, low, high);
    reverseText(text, 0, n - 1);
}

int main()
{
    char text[] = "Technical Interview Preparation";
    reverse_text(text);
    printf("%s", text);
    return 0;
}
