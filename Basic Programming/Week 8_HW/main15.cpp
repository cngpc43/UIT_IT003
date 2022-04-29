#include <iostream>

using namespace std;



int burnCandles(int candles, int makeNew)
{
    
    if (makeNew>candles)
        return candles;
    if (makeNew==0)
        return candles;
    else 
    if (candles==0)
        return 0;
    int result=0, left=0;
    while ((candles+left/makeNew)!=0)
    {
        if (left >= makeNew)
        {
            candles++;
            left=left-makeNew;
        }
        else 
            left = left+ candles % makeNew;
        result += candles;
        candles = candles / makeNew;
    }
    return result;
}