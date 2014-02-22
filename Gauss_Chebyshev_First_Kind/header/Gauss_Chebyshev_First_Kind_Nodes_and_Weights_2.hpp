//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_2.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 2.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_2_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_2_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_2(long double*& nodes, long double& weight) {
	weight 		= 1.5707963267948966192313216916397514420985846996875529104874722961539082031431044993140174126710585339910740432566411533235469223;

	nodes		= new long double[2];

	nodes[0] 	= 0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
	nodes[1] 	= -0.707106781186547524400844362104849039284835937688474036588339868995366239231053519425193767163820786367506923115456148512462418;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_2_hpp__)*/