#pragma warning(disable : 4996) // чиним fopen
#include <stdio.h> 
#define MAXLINE 1024  
int main(void)
{  
	char line[MAXLINE]; // текущая строка  
	char* ptr;
	// открыть файл для чтения  
	FILE* fpin = fopen("text.txt", "r");
	if (fpin == NULL)
	{
		printf("error: file not found\n"); // если файл с данными отсутствует, выводим ошибку
		return 0;
	}
	// открыть файл для записи
	FILE* fpout = fopen("result.txt", "a"); // создаем файл с результатом


	while (!feof(fpin)) // цикл до конца файла  
	{   // чтение строки
		ptr = fgets(line, MAXLINE, fpin);

		if (ptr == NULL)
			break; // файл исчерпан
		while (*ptr != '\0')
		{
			if (*ptr == ' ')
			{    
				*ptr = ',';
			}
			ptr++; // продвигаем указатель по строке
		}
		fputs(line, fpout); // запись строки
	}
	fclose(fpin); // закрыть входной файл  
	fclose(fpout); // закрыть выходной файл 
	return 0;
}
