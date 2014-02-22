//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_9.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 9.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_9_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_9_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_9(long double*& nodes, long double& weight) {
	weight 		= 0.34906585039886591538473815369772254268857437770834509121943828803420182292068988873644831392690189644246089850147581184967709385;

	nodes		= new long double[9];

	nodes[0] 	= 0.98480775301220805936674302458952301367064325171984241879002575235582759994303623927467841005611989916062133620382429048903021783;
	nodes[1] 	= 0.86602540378443864676372317075293618347140262690519031402790348972596650845440001854057309337862428783781307070770335151498497255;
	nodes[2] 	= 0.6427876096865393263226434099072634329075598842056817903249772546711128362409586397104882277175943516201478026726464649853926197;
	nodes[3] 	= 0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	nodes[4] 	= 0.e-127;
	nodes[5] 	= -0.3420201433256687330440996146822595807630833675141606284650484976847147637020775995641901823385255475404735335311778255036375982;
	nodes[6] 	= -0.6427876096865393263226434099072634329075598842056817903249772546711128362409586397104882277175943516201478026726464649853926197;
	nodes[7] 	= -0.8660254037844386467637231707529361834714026269051903140279034897259665084544000185405730933786242878378130707077033515149849725;
	nodes[8] 	= -0.9848077530122080593667430245895230136706432517198424187900257523558275999430362392746784100561198991606213362038242904890302178;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_9_hpp__)*/