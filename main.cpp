/*
 * main.cpp
 *
 *  Created on: 10 May 2014
 *      Author: KonstantinosChalkias
 */


#include <iostream>
#include "IntExprPart2.hpp"

int main (int argc, const char * argv[])
{

    //typedef NOT<IMP<P, OR<NOT<AND<LIT<true>, P > >, NOT<P> > > > FORM;
    //typedef DIVISION<X,LIT<0> > FORM;
    //FORM X;


    //int input1 = 2;
    //printf("Result is %d\n", (X.eval(input1)));
	//typedef BOUNDS<2,7> FORM;
	typedef ADDITION<X<BOUNDS<2,4> >,LIT<2> >  FORM;
	//typedef ADDITION<ADDITION< MYNUMBER<X ,BOUNDS<2,5> >,LIT<3> >,ADDITION< MYNUMBER<X ,BOUNDS<2,5> >,LIT<3> > > FORM;
	//typedef SUBSTRACTION<ADDITION< MYNUMBER<X ,BOUNDS<0,5> >,LIT<3> >,ADDITION< MYNUMBER<X ,BOUNDS<0,5> >,LIT<1> > > FORM;
	//typedef MULTIPLICATION<ADDITION< MYNUMBER<X ,BOUNDS<0,5> >,LIT<3> >,ADDITION< MYNUMBER<X ,BOUNDS<0,5> >,LIT<5> > > FORM;

	FORM T;

	//int i=3;
	int* res = T.eval(3);
	printf("%d<=  %d <=%d \n",res[1],res[0],res[2] );
    return 0;

}
