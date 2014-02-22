//
//        Gauss_Laguerre_Nodes_and_Weights_7.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 7.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_7_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_7_hpp__

void Gauss_Laguerre_Nodes_and_Weights_7(long double*& nodes, long double*& weights) {
	nodes	= new long double[7];
	weights	= new long double[7];

	nodes[0] 	= 0.19304367656036241383824788500382372459120984891356750620225136201006415345782559871118003823365115612373429871679737947590328119;
	weights[0] 	= 0.409318951701273902130432880017778794766943183207433849364960711084393276125313936505267569753299735836871490370454105238698353;

	nodes[1] 	= 1.0266648953391919503451994431748335351021966391136589333607107349300045456686682315951892100561068930429806129371486819286544913;
	weights[1] 	= 0.42183127786171977992928100541749893425900270593200299919010224347881378577765054361914173904057093683899914455920747436245254;

	nodes[2] 	= 2.5678767449507462069077862266595901968369581616444700992866063303240503321974487821383346200011905724664254743082485206062309866;
	weights[2] 	= 0.14712634865750527839537418463654571735447659494559067156700082178865140336466631595376166029179058453234935126953389197731615;

	nodes[3] 	= 4.9003530845264845681017143781024272182326822536691323824442733012926988370938012768358608940248312092759732409230278238786796644;
	weights[3] 	= 0.0206335144687169398657056149642012957013455165958544802830214011066133340936628342069309865868364861631633696523746804152986;

	nodes[4] 	= 8.1821534445628607910818275512339616296407668517524296643048342450041449025202649459386747106022315685557229645415475593796408198;
	weights[4] 	= 0.001074010143280745522131959628430313790425752197955201860520306160868503752638765016731679063637537508236584755438088254397843;

	nodes[5] 	= 12.734180291797813758012642458195109090853336141446261917460200935582863612586646759328152143354140682014199320963540813757971326;
	weights[5] 	= 0.00001586546434856420126873262232340559538609480705009171784269678973607464897495100198286767200606375999080066756942319533600108;

	nodes[6] 	= 19.395727862262540311712582057630254604742850103460479496941123090856173616475344405452608383727847918520964087609689220972919431;
	weights[6] 	= 3.170315478995580562271322153853242015231411270601655181959092362223709265369618349759185865536038925872542233655650050730126e-8;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_7_hpp__)*/