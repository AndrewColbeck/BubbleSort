// Assignment 2, Question 3 by Andrew Colbeck
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SwinGame.h"
#define SIZE 800



// Structures:
struct bar{
  int value;
  color clr;
};


// Prototypes:
color get_color(int num);
void fill_array(struct bar temp[]);
void draw_bar(struct bar temp[]);
void sort_data(struct bar data[]);


// ** MAIN PROGRAM **
int main()
{
  //Variables:
  struct bar temp[SIZE];
  srand(time(NULL));

  open_graphics_window("Array Rectangles", 800, 700);


  fill_array(temp);
  
  do {

    process_events();
    clear_screen(ColorWhite);
    
    draw_bar(temp);

    // SORT THE BARS:
    if (key_typed(SKEY))
      sort_data(temp);

    // RANDOMISE THE BARS:
    if (key_typed(RKEY))
      fill_array(temp);

    refresh_screen(60);

  //Closes loop when input to close the window is received
  } while (window_close_requested() == false);

  return 0;
}


//  ** FUNCTIONS **

// Function to store Color Details:
color get_color(int num){
  color clr;
  float hue;

  // Cast the num to a float, divide by screen height:
  hue = (float) num / (float)screen_height();
  
  // [Hue][Saturation][Brightness]:
  clr= hsbcolor(hue, 0.7, 0.8);

  return clr;
}


// Function to obtain all random values for bar array:
void fill_array(struct bar temp[]){
  int i;

  // For loop to read in random value & get color():
  for (i = 0; i < SIZE; i++){
    temp[i].value = rand()%screen_height()+1;
    temp[i].clr = get_color(temp[i].value);
  }
}


// Function to draw the bars:
void draw_bar(struct bar temp[]){
  int i;
  float x,y, rectwidth=1;

  // Build random bars at size of rectwidth:
  for(i=0; i<SIZE; i++){
    x = rectwidth * i;

    // Obtain random height:
    y = screen_height() - temp[i].value;

    // Build the bar with randomised variables:
    fill_rectangle(temp[i].clr, x, y, rectwidth, temp[i].value);
  }
}

// Function to Sort the Bars in order of height:
void sort_data(struct bar data[]){
  int i, j, temp;

  for ( i = 0; i < (SIZE - 1); i++ ){

    for (j = 0; j < (SIZE - 1 - i); j++){
      // If data at[j] is greater, place in hold & swap:
      if (data[j].value > data[j+1].value){
        temp = data[j].value;
        data[j].value = data[j+1].value;
        data[j+1].value = temp;
      }
    }
  }
}
