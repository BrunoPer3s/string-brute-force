#include <stdio.h> 
#define M 7
#define N 22

int forcaBruta(char P[M], char T[N]) {
  int count = 0;
  for(int i = 0; i <= N - M; i++) {
      int j = 0;
      
      while(j < M && T[i+j] == P[j]) {
        count++;
        j++;
      }

      if(j < M && T[i+j] != P[j]) {
        count++;
      }

      if(j == M) {
        printf("\nCount = %d\n", count);
        return i;
      }
  }
}

int main() {
  char texto[N] = "abcdabddabdabcdabcdabc";
  char padrao[M] = "abcdabc";

  int index = forcaBruta(padrao, texto);

  printf("\n%d ", index);

  for (int i = 0; i < M; i++)
  {
      printf("%c", texto[index]);
      index++;
  }

  return 0;
}
