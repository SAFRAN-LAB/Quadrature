//
//        Gauss_Chebyshev_First_Kind_Nodes_and_Weights_24.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.00:17:35.
//
//
//        Array of nodes and weights for Gauss Chebyshev_First_Kind quadrature of order 24.
//
//

#ifndef __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_24_hpp__
#define __Gauss_Chebyshev_First_Kind_Nodes_and_Weights_24_hpp__

void Gauss_Chebyshev_First_Kind_Nodes_and_Weights_24(long double*& nodes, long double& weight) {
	weight 		= 0.13089969389957471826927680763664595350821539164062940920728935801282568359525870827616811772258821116592283693805342944362891019;

	nodes		= new long double[24];

	nodes[0] 	= 0.99785892323860350673806979127277760453186639632596641807472562927418785082869811103795654762696687676152145802164698300971237868;
	nodes[1] 	= 0.98078528040323044912618223613423903697393373089333609500291608854530651354960506391506498585330076325989486627987757846813109608;
	nodes[2] 	= 0.94693012949510566425580427485398368369883283329694828837848042605079740373146403175133466156841096024914099882742392113177790614;
	nodes[3] 	= 0.89687274153268830389410393639308119817919311593230398127811224097398482759103130926798293626950064110106562182666872339750562385;
	nodes[4] 	= 0.83146961230254523707878837761790575673856081198724996344612459022763792014464234398177491900798065033600294023844344972886919705;
	nodes[5] 	= 0.75183980747897739640751940637696144277114121554499348062397833655603408494553945152600935233432057851814892872188730937281210631;
	nodes[6] 	= 0.6593458151000688684251246120553374509154692728858069400953745842519938732933739539577293372327956053871090389442641237537548445;
	nodes[7] 	= 0.555570233019602224742830813948532874374937190754804045924153528202949247577480068383124880351263934355537945824928208146300649;
	nodes[8] 	= 0.4422886902190012819952389773242447301569292055711623721505721010712386032512180426548316672757029424059835121967187748634117297;
	nodes[9] 	= 0.3214394653031615807010576240789015860584644580075291549075415042933126402562311099573356486205051578727858273356134547143762516;
	nodes[10] 	= 0.1950903220161282678482848684770222409276916177519548077545020894947633187859245802253253092340903817309920701055366117589657998;
	nodes[11] 	= 0.0654031292301430668153155587751754414406323039450540178319876507463469074463889652862080172615199907650626815882252736686364268;
	nodes[12] 	= -0.0654031292301430668153155587751754414406323039450540178319876507463469074463889652862080172615199907650626815882252736686364268;
	nodes[13] 	= -0.1950903220161282678482848684770222409276916177519548077545020894947633187859245802253253092340903817309920701055366117589657998;
	nodes[14] 	= -0.3214394653031615807010576240789015860584644580075291549075415042933126402562311099573356486205051578727858273356134547143762516;
	nodes[15] 	= -0.4422886902190012819952389773242447301569292055711623721505721010712386032512180426548316672757029424059835121967187748634117297;
	nodes[16] 	= -0.555570233019602224742830813948532874374937190754804045924153528202949247577480068383124880351263934355537945824928208146300649;
	nodes[17] 	= -0.6593458151000688684251246120553374509154692728858069400953745842519938732933739539577293372327956053871090389442641237537548445;
	nodes[18] 	= -0.7518398074789773964075194063769614427711412155449934806239783365560340849455394515260093523343205785181489287218873093728121063;
	nodes[19] 	= -0.831469612302545237078788377617905756738560811987249963446124590227637920144642343981774919007980650336002940238443449728869197;
	nodes[20] 	= -0.8968727415326883038941039363930811981791931159323039812781122409739848275910313092679829362695006411010656218266687233975056239;
	nodes[21] 	= -0.9469301294951056642558042748539836836988328332969482883784804260507974037314640317513346615684109602491409988274239211317779061;
	nodes[22] 	= -0.9807852804032304491261822361342390369739337308933360950029160885453065135496050639150649858533007632598948662798775784681310961;
	nodes[23] 	= -0.99785892323860350673806979127277760453186639632596641807472562927418785082869811103795654762696687676152145802164698300971237868;
}
#endif /*(__Gauss_Chebyshev_First_Kind_Nodes_and_Weights_24_hpp__)*/