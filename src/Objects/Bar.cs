// Title:			Color Bar
// Author:			Andrew Colbeck © 2019, all rights reserved.
// Version:			1.0
// Description:		Bar class is generated with Color and Position passed in 
// Last modified:	10/02/2019

using System;


namespace sortingAlgorithms
{
    public class Bar
    {
        int position; // Position in array
        float h; // HUE (set values from 0 - 1)
        float s; // SATURATION (set values from 0 - 1)
        float b; // BRIGHTNESS (set values from 0 - 1)
        
        public Bar(){
           
        }

        public int Position { get => position; set => position = value; }
        public float H { get => h; set => h = value; }
        public float S { get => s; set => s = value; }
        public float B { get => b; set => b = value; }
    }
    
    
}
