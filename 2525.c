#include<stdio.h>

int main(void) {
  int hour, minute, time;
  scanf("%d %d", &hour, &minute);
  scanf("%d", &time);
  hour += time/60;
  minute += time%60;

  if(minute >= 60) {
    hour += 1;
    minute -= 60;
  }

  if (hour >= 24) {
    hour -= 24;
  }

  printf("%d %d", hour, minute);
}