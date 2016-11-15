//
// Created by ma3 on 14.11.2016.
//

#ifndef MONTECARLOSIMULATION_GENERICS_H
#define MONTECARLOSIMULATION_GENERICS_H

/**
 * Generic Programming
 * writing code that can use an arbitrary type or types
 * C++ template
 * Much code is the same except for type. If the code can be applied universially
 * there can be a big saving in coding and debuging.
 */

// compiler compiles the code apropriate the parameters.
//If the i and j parameters are ints, the compiled code will swapCPP( int &i, int &j)
template <class T>
inline void swapCPP( T &i, T &j)
{
    T temp = i;
    i = j;
    j = temp;
}


//This can sum any kind of array
// we use summable because data you want to use as an array has to allow summing operation (+=)
//if that operation is not defined with particular type,
// the substitution of codes for that type will get syntax error in best case
// the worst case, what if += have other meaning different an intended one, that would lead to something unexpected at runtime
// sumable is a reminder of the remplacement type must have this arithmetic summation


// const means any data sitting in that array is not mutable
template <class summable>
summable sum(const summable data[], int size)
{
    summable s = 0;
    for (int i = 0; i <size; ++i) {
        s += data[i]; // += must work for summable
    }
    return s;
}

/**
 * if you start multiple argumentative templates, you get into unneeded complexity in most cases.
 * more genericity but be careful
 *
 *
 */
// if there is not a safe casting from T1 to T2 then, when code runs, it is going to be error
template <class T1, class T2>
void copy(T1 source[], T2 destination[], int size){

    for (int i = 0; i < size; ++i) {

        destination[i] = static_cast<T2>(source[i]);
    }
};
class Generics {

};


#endif //MONTECARLOSIMULATION_GENERICS_H
