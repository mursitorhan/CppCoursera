//
// Created by ma3 on 14.11.2016.
//

#ifndef MONTECARLOSIMULATION_SWAPFUNCTION_H
#define MONTECARLOSIMULATION_SWAPFUNCTION_H

/*
 * C is a call by value language, so in order to change the two variables values
 * we must know to use pointers. C++ makes it easier
 */

// This is the classic C idiom for passing parameters that need modification
// as an effect, call by references is simulated with pointers
void swap( int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

// C does not support function overloading,
// so each function in a given scope must have a unique name
void swap_double (double *i, double *j)
{
    double temp = *i;
    *i = *j;
    *j = temp;

}

//With inline swap is going to be efficient
//what is passed in this function will be directly manpulable because of call by reference mechanism
inline void swapCPP( int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

// Can have more than one swapCPP function because of overloading
//compiler differentiates between two swaps by their signature
// signature :  type and number of arguments of function
inline void swapCPP( double &i, double &j)
{
    double temp = i;
    i = j;
    j = temp;
}

/*
int main()
{

    int m = 5, n = 10;
    double x = 5.3, y = 10.6;

    printf("inputs %d, %d\n", m, n);
    printf("double inputs %lf, %lf\n", x, y);
    swap(&m,&n);
    swap_double(&x, &y);

    swapCPP(m,n);
    swapCPP(x,y);

}
 */



#endif //MONTECARLOSIMULATION_SWAPFUNCTION_H
