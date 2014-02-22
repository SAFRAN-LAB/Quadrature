//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_1.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:56.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 1.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_1_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_1_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_1(long double*& nodes, long double*& weights) {
	nodes	= new long double[1];
	weights	= new long double[1];

	nodes[0] 	= 0.e-127;
	weights[0] 	= 1.5707963267948966192313216916397514420985846996875529104874722961539082031431044993140174126710585339910740432566411533235469223;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_1_hpp__)*/