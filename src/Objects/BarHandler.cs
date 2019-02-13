// Title:			Bar Handler
// Author:			Andrew Colbeck © 2019, all rights reserved.
// Version:			1.0
// Description:		Creates and Maintains Color Bar positions 
// Last modified:	10/02/2019

using System;
using SwinGameSDK;

namespace sortingAlgorithms
{
    public class BarHandler
    {

        public Bar [] bars;
        static Random random = new Random();
        
        // Creates the Bar Array
        public BarHandler (int ArraySize) {
            bars = InitializeArray<Bar> (ArraySize);
            SetColors ();
        }
      
        // Populates the Array with initialised Bar Objects
        public static T[] InitializeArray<T>(int length) where T : new() {
            T[] array = new T[length];
            for (int i = 0; i < length; ++i) {
                array[i] = new T();
            }
            return array;
        }
        
        // Sets the color of the Bars, H=Hue, S=Saturation, B=Brightness
        public void SetColors(){
            int i = 1;
            foreach(Bar b in bars){
                b.Position = i;
                b.H = (float)random.NextDouble(); // Random float from 0 - 1
                b.S = 1; // 0 = no saturation, 1 = full saturation
                b.B = 1; // 0 = no brightness, 1 = full brightness
                i++;
            }
        }
        
        // Draws the Bars on the screen
        public void DrawBars(){
            int i = 50; // Padding from edge of screen (dynamically set in Main)
            foreach(Bar b in bars){
                SwinGame.DrawRectangle (SwinGame.HSBColor(b.H, b.S, b.B), i, 50, 1, 300);
                i++;
            }
        }
    }
    
}   
