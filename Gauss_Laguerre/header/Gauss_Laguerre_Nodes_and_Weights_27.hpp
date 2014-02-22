//
//        Gauss_Laguerre_Nodes_and_Weights_27.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 27.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_27_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_27_hpp__

void Gauss_Laguerre_Nodes_and_Weights_27(long double*& nodes, long double*& weights) {
	nodes	= new long double[27];
	weights	= new long double[27];

	nodes[0] 	= 0.052579898206364311723767958455740172564704253201219242148863754126595549345766001070474317566055706714951254613087295178515878219;
	weights[0] 	= 0.12804572690683746145125007609562090967869666981880653098352552443105060141465796794063602169134330317824326071187787363487908;

	nodes[1] 	= 0.27722910598770463964023268308813023426409726163003813208033049133409951564860891636570470939674424958063150005536200244430034453;
	weights[1] 	= 0.2384188493941431264600727941269101433129785742848792039807984546048335248255144474189949231862265340430422573294912793248721;

	nodes[2] 	= 0.68216391137800683477215875117594290381695314771101676557920406953486002003104654671914721010700002482463168234945229151063690807;
	weights[2] 	= 0.25049340652300296789064147930874582264909353304537905778542724323104248683621398776377710346321258370543409408184148130543;

	nodes[3] 	= 1.2688141807507568016152064818768936704573466990010077563998967668192878488550441267188201418551949868014077644272983835483524069;
	weights[3] 	= 0.19066206759352427455015740737881758730936574460699140402201035113814486531050233792268552351856277572022935330257945034383;

	nodes[4] 	= 2.0391592782504855135863509381473076128511813757048007312790861627409256820958701554997998042919003621650005051345984479486214902;
	weights[4] 	= 0.1123109493118507749313420085387309142030732773697282530345059678051600211430339565721097344092180850058926075522273357509;

	nodes[5] 	= 2.9958355818751640333548643242585685843198078638756645350451332667071041765808174339953843547083283956590956572620130698153798286;
	weights[5] 	= 0.0525393854751321475549927584200944515324726062372141825643010477547750554218190847148318810858837841560809711112113927178;

	nodes[6] 	= 4.1421944825632467620850881384606807803417036318802421044169914215649319539742079809229030976151868264520678013001915760962648163;
	weights[6] 	= 0.019740923275744470301124554870390238812705628808662945564291860171900712872164755924272349929206344536019702890023413798;

	nodes[7] 	= 5.4823717160490678276554222395192686379294595530972838929896571528739612804587353696855091733811533988076587629399494102539274481;
	weights[7] 	= 0.0059841135557009914540935740674596512092049083364442187845636927009934067832102167122069698989046731482900558472322642;

	nodes[8] 	= 7.021376024605551167427748947678581290718532156852377539414880991557941670324810842223247073848384354686193183831052088570278693;
	weights[8] 	= 0.001464150360922787819579114321522057590204165887648937591277180063917228263065983399336076935859570417715475842483495249;

	nodes[9] 	= 8.7652027168507095569312539872848595638570817809544182310976480849900779754761963920716969492520648728081226651909110392170181539;
	weights[9] 	= 0.000288498003965843352999044228492367251380542757952463041394260423633696433405154515657444998659689773114406059464201583;

	nodes[10] 	= 10.720979045996847232284227615952222031834501084546123088922487167387163638604776924725306032713850941150716519954909442239399575;
	weights[10] 	= 0.000045576544403734962510194770387730982493285865734355512553486546672396014491767998086306904735132007073705576161768349;

	nodes[11] 	= 12.897150901909760499333861922964425618064592522156237177091420814847312668692324164520053609202783857983856398623175402772555672;
	weights[11] 	= 5.735756119190869176366576163941545392483235792350609166260799741461121874152902832897356644473433646205185876213407e-6;

	nodes[12] 	= 15.303724197068925250042259606989039818660590331485861183414871644875890610869985157783391886827102710496564188256636530361893789;
	weights[12] 	= 5.702097017139381355014595081189117285903919257216375320335214732963822945146427695145556069651565415440106348982453e-7;

	nodes[13] 	= 17.95258016401065970566240934456609146099916906389689473835497937473695562661734794036679865420260885402569915991639486646303512;
	weights[13] 	= 4.43076915763211704086525385353914163916212301356712627685693541237879279669439233813149707525365169612144558891282e-8;

	nodes[14] 	= 20.857892743471171966890912175470867307473815111873240376157643569700665853573326038961708624439122611171816829053907924910413105;
	weights[14] 	= 2.65616531649379943336078633879366562727424776314974295077005440706172637262178061154508622002867150576111186747844e-9;

	nodes[15] 	= 24.036690385983112966991145794574355073545498177046811878306858873753936730354934106170115428007257339892563228012020978255899407;
	weights[15] 	= 1.2089475247687209827247599632032768102705137509942107551983043718944533335816470353613036391464133732955976530269e-10;

	nodes[16] 	= 27.509627633675776866581738381501385668428604033474907617769750240634513117214575739186556794773636573063476176179261167773738136;
	weights[16] 	= 4.0962644275901271898988461968678256272647433435198829667151703406727729890556493464340918891053249303943755507956e-12;

	nodes[17] 	= 31.302070792021055544400690940909439982477362768062061078865193963280980713597411090798667530863438451249794820595989018818599992;
	weights[17] 	= 1.00834976731650656217167198353527396591864000022099643674411042901487124562247600873373287212318209286929415929932e-13;

	nodes[18] 	= 35.445670666132857125133110590524366022166612806791956626180787616658762700661305896451713653980360469702908393516527506411776896;
	weights[18] 	= 1.7490517511153701590893024758703598852046407582660426225160732818134414649705190220369545546682553420867588552932e-15;

	nodes[19] 	= 39.980722621126703658832506346674440097307114011985446022163967795330713215164110969491376287560873988241463736304760051188318799;
	weights[19] 	= 2.0559670832614961681777078237768753761029898197949964192769162602341731316106620389404483166665190202985571311778e-17;

	nodes[20] 	= 44.95986478533798366580615852388251109567203232031579040502256541757846333054237313739761003855606798367796446822423500035317327;
	weights[20] 	= 1.55629573672379991551727388046730747349829922095418573561499278459145922949271351253306419307376461975085507362953e-19;

	nodes[21] 	= 50.454196152727714412835435821769347582480063488121573903363136882207688048479905471273909292056753696677062596809092887253639515;
	weights[21] 	= 7.0812651779011907449089336738285571577521686428926272981863569308787669799441905606626748902908713376074064012828e-22;

	nodes[22] 	= 56.564130901518344418468882551050608174124152297231720611897593918508296230432532108267077799951096752663371248458437958000080677;
	weights[22] 	= 1.75747201042860186279889593974246515559032681874319732597619725370199556226586130160449566712207996881243039415643e-24;

	nodes[23] 	= 63.440546684688830166249720305188556994886862039786023617167448252792917890625001479558503188009002000525886482435816780867280066;
	weights[23] 	= 2.05704303679757968437959215203054421177037541872545773015849370635064997909010108200259433510302324131292120805836e-27;

	nodes[24] 	= 71.331848055160100581828542080666628560275340778711747505787365448287823660403539237069841395447345407191479981378805054974714498;
	weights[24] 	= 8.94741911536920171263741030596027550490200364130001219056914146525423684146410368305811223491418944909284384143476e-31;

	nodes[25] 	= 80.7127638470960543836544906411391868002149301593826842635706603951001687099724172449996499752838101115595671383957303378356238;
	weights[25] 	= 9.209310916917907681818856149093759735765109139698309870869871272020312925061006571851548510426168758504161030836367e-35;

	nodes[26] 	= 92.802613525557044106211812906230554260267891281222850975511576462067961581403029527705032976102875072226047856780383486936561714;
	weights[26] 	= 7.17974237829471173564935799456432683310304040983541258082698555440043860515279439771467224128402313627892113374012432e-40;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_27_hpp__)*/