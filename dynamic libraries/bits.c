#include"bits.h"

// Function to set the kth bit of s 

int setBit(int s, int k) 
{ 
    return (s | (1 << (k - 1))); 
} 
  
// Function to clear the kth bit of s 

int clrBit(int s, int k) 
{ 
    return (s & (~(1 << (k - 1)))); 
} 
  
// Function to toggle the kth bit of s

int toggleBit(int s, int k) 
{ 
    return (s ^ (1 << (k - 1))); 
} 

//Function to query

int query(int s,int k)
{
    return(s & (1<<(k-1)));
}