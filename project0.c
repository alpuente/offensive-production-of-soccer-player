/*
 * program to compute offensive the production rating of a soccer player by Amy Puente
 *
 * adapted from a program for baseball or softball on-base percentage, by John C. Lusth, 2015
 * 
 * this program may be freely distributed and modified, as long as:
 * 
 * a) the authorship of any modifications is added
 *
 * b) the reason for modification is added
 *
 * c) the comments are updated to reflect modifications
 *
 * d) the original authorship and that of any previous modifiers is preserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// function prototypes

void getData(int *,int *,int *,int *,int *, int *);
void displayData(int,int,int,int,int,int);
double computeRating(int,int,int,int,int,int);

int
main(int argc, char **argv)
    {
    int goals;
    int shots;
    int eck;
    int assists;
    int passes;
    int touches;
    double rating;
    
    //get the statistics from the user
    //pass in addresses so getData can set these variables
    getData(&goals,&shots,&eck,&assists,&passes,&touches);

    //compute the rating
    rating = computeRating(goals,shots,eck,assists,passes,touches);

    //display the statistics
    displayData(goals,shots,eck,assists,passes,touches);

    //display the results
    printf("\nFor these statistics, the player's offensive production rating is %f\n",rating);

    return 0;
    }

void
getData(int *goals,int *shots,int *eck,int *assists,int *passes,int *touches)
    {
    printf("Enter number of goals: ");
    scanf(" %d", goals);  //atts is a pointer already

    printf("Enter number of shots on goal: ");
    scanf(" %d",shots);

    printf("Enter number of effective corner kicks: ");
    scanf(" %d",eck);

    printf("Enter number of assists: ");
    scanf(" %d",assists);

    printf("Enter number of effective passes: ");
    scanf(" %d",passes);

    printf("Enter number of touches: ");
    scanf(" %d",touches);
    return;
    }

double
computeRating(int g, int s, int c, int a, int p, int t)
    {
    return (((5*g)+(4*s)+(3*c)+(2*a)+p)/t);
    }

void
displayData(int g,int s,int c,int a,int p, int t)
    {
    printf("\n");
    printf("goals: %d\n",g);
    printf("shots on goal: %d\n",s);
    printf("effective corner kicks: %d\n",c);
    printf("assists: %d\n",a);
    printf("effective passes: %d\n",p);
    printf("touches: %d\n",t);
    return;
    }
