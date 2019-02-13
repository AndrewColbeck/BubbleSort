// Title:			/Users/andru/Desktop/dev/sorting-algorithms/src/Objects - ThreadWorks.cs
// Author:			Andrew Colbeck © 2019, all rights reserved.
// Version:			1.0
// Description:		Program designed for submission in OOP Portfolio. 
// Last modified:	11/02/2019
// To Fix:         	Check Instructions
//
//
using System;
using System.Threading;
using SwinGameSDK;
namespace sortingAlgorithms
{
    public class ThreadWork
    {
        public BarHandler barHandler = new BarHandler (700);
        public BarHandler renderedbarHandler = new BarHandler (700);
        
        public ThreadWork ()
        {
        }

        public void Test(){
        
        }
        public void Sort ()
        {
            Bar temp = new Bar ();

            for (int i = 0; i < barHandler.bars.Length - 1; i++) {


                for (int j = 0; j < barHandler.bars.Length - i - 1; j++) {
                    if (barHandler.bars [j].R > barHandler.bars [j + 1].R) {
                        temp = barHandler.bars [j];
                        barHandler.bars [j] = barHandler.bars [j + 1];
                        barHandler.bars [j + 1] = temp;
                        
                    }

                    SwinGame.RefreshScreen ();
                }
            }
        }
    }
}
