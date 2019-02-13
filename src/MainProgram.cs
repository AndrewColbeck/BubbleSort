// Title:           UI Handler
// Author:          Andrew Colbeck © 2019, all rights reserved.
// Version:         1.0
// Description:     Uses Bubblesort algorithm to sort bars in order of color
// Last modified:   12/02/2019

using System;
using System.Collections.Generic;
using SwinGameSDK;

namespace sortingAlgorithms
{
    public class MainProgram
    {
        
        static int arraySize = 500; // Number of color bars on screen
        static int speed = 3; // Number of bars moved before screen refreshes
        static BarHandler barHandler = new BarHandler (arraySize);
        static UIHandler uIHandler = new UIHandler (barHandler, speed);
        
        public static void Main ()
        {
            //Open the game window
            SwinGame.OpenGraphicsWindow ("Bubble Sort", (arraySize+100), 400);

            //Run the game loop
            while (false == SwinGame.WindowCloseRequested ()) {
                
                uIHandler.ProcessEvents ();
                barHandler.DrawBars ();
                SwinGame.RefreshScreen (60);

            }
        }
    }
}