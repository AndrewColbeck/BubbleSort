// Title:			UI Handler
// Author:			Andrew Colbeck © 2019, all rights reserved.
// Version:			1.0
// Description:		Sorts Bars, Draws the menu, and updates screen
// Last modified:	12/02/2019

using System;
using System.Collections.Generic;
using SwinGameSDK;

namespace sortingAlgorithms
{
    public class UIHandler
    {
        int sortIterations;
        int speed;
        BarHandler barHandler;
        BubbleSorter bubbleSort = new BubbleSorter ();
        static Font maven = SwinGame.LoadFont ("maven_pro_regular", 20);
        static Dictionary<String, bool> commands;
        
        public UIHandler (BarHandler B, int Speed){
            barHandler = B;
            speed = Speed;
            commands = PopulateCommandList ();
        }

        public void ProcessEvents()
        {

            // Fetches the next batch of UI interaction
            SwinGame.ProcessEvents ();

            // Applies Keyboard Input
            if (SwinGame.AnyKeyPressed ())
                updateEvents ();

            // Clears the screen
            SwinGame.ClearScreen (Color.White);
            
            // Draws Menu Commands on screen
            DrawMenu ();
            
            // Execute a single iteration of the selected Sort Method:
            SortBars ();
            
        }

        private void SortBars (){
            if (commands ["BubbleSorting"] && sortIterations < barHandler.bars.Length - 1) {

                for (int i = 0; i < speed; i++) {
                    bubbleSort.SortOneBar (barHandler.bars, sortIterations);
                    sortIterations++;
                }
            }
        }

        public Dictionary<String, bool> PopulateCommandList() {
            commands = new Dictionary<String, bool> ();
            commands.Add ("BubbleSorting", false);
            return commands;
        }

        private void updateEvents() {
            
            if (SwinGame.KeyTyped (KeyCode.BKey))
                commands ["BubbleSorting"] = true;
            if (SwinGame.KeyTyped (KeyCode.RKey))
                Reset ();  
        }
        
        private void Reset() {
            commands ["BubbleSorting"] = false;
            barHandler.SetColors ();
            sortIterations = 0;
            
        }
        
        private void DrawMenu() {
            SwinGame.DrawText ("Bubblesort: B Key", Color.Black, maven, 80, 15);
            SwinGame.DrawText ("Reset: R Key", Color.Black, maven, barHandler.bars.Length-100, 15);
        }
    }
}
