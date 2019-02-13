// Title:			/Users/andru/Desktop/dev/sorting-algorithms/src/Objects - BubbleSort.cs
// Author:			Andrew Colbeck © 2019, all rights reserved.
// Version:			1.0
// Description:		Uses BubbleSort algorithm to sort Color Bars in order of Color 
// Last modified:	11/02/2019

using System;
using SwinGameSDK;

namespace sortingAlgorithms
{
    public class BubbleSorter
    {
        public BubbleSorter ()
        {
        }
        
        // BubbleSort process modified to sort one bar and return array
        // so that Screen can be refreshed mid-sort
        public Bar[] SortOneBar(Bar[] bars, int i){
            
            Bar temp = new Bar ();
            
            for (int j = 0; j < bars.Length - i - 1; j++) {
                if (bars [j].H >= bars [j + 1].H) {

                    temp = bars [j];
                    bars [j] = bars [j + 1];
                    bars [j + 1] = temp;
                }
            }
            return bars;
        }
        
    }
}
