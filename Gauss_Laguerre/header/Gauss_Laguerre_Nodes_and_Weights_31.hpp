//
//        Gauss_Laguerre_Nodes_and_Weights_31.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 31.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_31_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_31_hpp__

void Gauss_Laguerre_Nodes_and_Weights_31(long double*& nodes, long double*& weights) {
	nodes	= new long double[31];
	weights	= new long double[31];

	nodes[0] 	= 0.045901947621108290743496080275223432077747416552731936782782571243577322372517215731666435933919781757862130310440875857109927271;
	weights[0] 	= 0.112527895503725838208477280828056472838785164123189627708601687631526822403657449444295645577426017034202157440097351137562508;

	nodes[1] 	= 0.24198016382477204890408974151713715061688001975507146641916501195355973556086585146272734471930962181934821060332533568928246897;
	weights[1] 	= 0.2155276081808912379522250528504573780260445735994630764461621410882619301688209803456474627598021782288758523115824648673113;

	nodes[2] 	= 0.59525389422235073707330165005414167507187298966261807968328204648023915792618619059103843610908060642644600736784017484481025574;
	weights[2] 	= 0.238308251645696547319057880892328206472595246090287833879510521365058056990708179301083689088619258740865131112652773698586;

	nodes[3] 	= 1.1066894995329987162111308789791642392513314343598071056991488596968168050605930074360987977479248125002845858087351471953086303;
	weights[3] 	= 0.19538830929790229249915303390710806416236706493496733980440181111985166602899675236067264464836673033115129897614070062152;

	nodes[4] 	= 1.7775956928747727211593727482674818381162448089258777968169923712576510673759612530202065172689162078997170832683666268025862371;
	weights[4] 	= 0.126982832893061901436352729046024674186056734992084729074273904037997705013216870892763477506798216942483974545039939773;

	nodes[5] 	= 2.6097034152566806503893375925314929856448273001600153770138725982879875009186803406547416564488703579688450287622840748241218047;
	weights[5] 	= 0.067186168923899300670929441993508013774017988814243435453526792865909942745824091558491771853325278918162000563826912236;

	nodes[6] 	= 3.605196802340044269880581755424261621812318741938253826116633110820133815394276209595998927441601872440886223445328540934927829;
	weights[6] 	= 0.029303224993879487404888669311974747966435104523321373539845767812059936174452872096513403864119081183310287086936747743;

	nodes[7] 	= 4.7667470844717611313629127271123134000485780735643308967699385260695682513717805968239597900304599795705177502173697122298752597;
	weights[7] 	= 0.01059756991529573608952938031443299522095918149588802529205416389686530899308805608201676040482832554060623462014181507;

	nodes[8] 	= 6.0975545671817409269925429328462815303273185457812365162045424016516763229329023511134200846553066093254967802587477466381395918;
	weights[8] 	= 0.00318512725823869803209748424330185537155748647581501523854031317184291691822683835804694870981170105600834808825985341;

	nodes[9] 	= 7.6014009492331374229360106942866624061980189872818799149538081693455349090762746790762016796330856903880754404074026662692020435;
	weights[9] 	= 0.00079549548307940382922092149012477369504268662000780833299926623423749438553133190209842934205609970209972582683994733;

	nodes[10] 	= 9.2827143134708894182536695297710447120927955812003909541637976483351860184250430694595973815166194443906937529015310601401135087;
	weights[10] 	= 0.00016480052126636687317862967116411936295583397528546144972553336162529819289950891138130385402370266998178974103032959;

	nodes[11] 	= 11.146649755619291358993815629586658683590503538672371602205598838083241056443574549920491997514305565698286146212908781385278313;
	weights[11] 	= 0.00002822923786431081639386097146899271673313053268454607926371727171020650824551733620039138015416062357063932278898451;

	nodes[12] 	= 13.199189576244998522464925028636676829023360287822786661237840866216046530214457995006128820159884626068710079130193498466081679;
	weights[12] 	= 3.9802902551008580387116174900105562707528414046823418869824067087016399340844058993097421781605007772665763538838e-6;

	nodes[13] 	= 15.44726831554931007580932589180107957707227948655620498226497921509020048753529925346963121867023736243262150695903007235093094;
	weights[13] 	= 4.5931839841801061673729694510288998319943424282112726216237435029452110627310684791420371259136493942517057716394e-7;

	nodes[14] 	= 17.898929826644757646725793817752419816120841575864416141784658935306733177471642522292939261037123463726818464254119936123095169;
	weights[14] 	= 4.3075545187731100930131457465896882435211852730227732283184002614097415721432875488296335934222395445458190721792e-8;

	nodes[15] 	= 20.563526336715822170743048968778607974606243114016745130949656579929085921018712377811326511692135007455150924034847398661795435;
	weights[15] 	= 3.255124993827157085517574925788404907095432880386376382875398066657121771923613432206815179697666395364154674229e-9;

	nodes[16] 	= 23.451973482011858591050255575933106320841633802182791392370654440520179280802095939300282107378142066581758603021213919654937342;
	weights[16] 	= 1.962024667541059499624715159314211645312541935368101516276085659189531179580998923660690305964794998058434989973e-10;

	nodes[17] 	= 26.57708135211826045997587698647846276074201758575792720440046687866883041581881715851911240474100174853108813069590723153207517;
	weights[17] 	= 9.31904990866175871295347164313307968917334339785091197914472800312439226201775356554539317202863533918495486437e-12;

	nodes[18] 	= 29.953990872346445506951917840023864107028050862229526486163282850349160747829312629800932598576066260860124475676720316799974808;
	weights[18] 	= 3.437754181941162052031259789831102629012274851435671809912019016209166899026097141531302105919562550559753101797e-13;

	nodes[19] 	= 33.600759532902202735410313885783504197837941965624800026453581443140514746596237304139933289601898518424706743434930972390152853;
	weights[19] 	= 9.67952471304467169974050357762058593075925924525697644656968110582470659913183704335597780557019638950377235057e-15;

	nodes[20] 	= 37.539164407330440882887902558000661904211460943946450918359047749007359680592611419812997422954904763735892249370286305439234772;
	weights[20] 	= 2.0368066110115247398010624219290690345530114220902493815908461724202306564758935851017618453888590900398388003e-16;

	nodes[21] 	= 41.795830870182219981347945853330374291088198848840537083879999401727776549064942034405692632096707474412136885709127006076652725;
	weights[21] 	= 3.12126872807135268317653586325849384900702599251769644445560649705661931379108102082362868661582998740175640111e-18;

	nodes[22] 	= 46.403866806411123136029227604385952412067687452853112598115561823117338155237139645346701798783401354708277213082505835587230425;
	weights[22] 	= 3.37295817041610524533956783083497829534823164675348201791664315178796444070137566682689748904820204203135654935e-20;

	nodes[23] 	= 51.405314476797755161861461088394784898812355519328398334453740201719557818125940211951806212972772097439850506714643537520753774;
	weights[23] 	= 2.46727963866166960110383632425410483881866450772711087400238404135228999394134061017607478929793107781077729085e-22;

	nodes[24] 	= 56.854992868715843620511922055659891148450496847922355056182141962200406424599081694943231500928505360181291407751881008950888048;
	weights[24] 	= 1.158220190452564363483456457659306680570391199799915468897406503263563521487411445105191633359938615551570656008e-24;

	nodes[25] 	= 62.826855908786321453677523304806497073841202983709200238389497883042808262000293081580119665068511105264895362558137474878884666;
	weights[25] 	= 3.247292259142542243479802280901958304272068135006032520503722352088998048543134480764225266794135811137037923264e-27;

	nodes[26] 	= 69.425277191080345623322251656443051736448894364762336778043868521219488120275615081206524097072888106469360986272580521404562336;
	weights[26] 	= 4.914301730805743274082007625966572515317891478154274145310903669374680201780146133040381156861947412869527888714e-30;

	nodes[27] 	= 76.807047763862732837609972285483574929685489053752047340376908610001762569078615904327783048352886158204203051252848851430854686;
	weights[27] 	= 3.4500071104808394132223135953805733562617274648387627606612993148183667303867972538905639752937346886719080211532e-33;

	nodes[28] 	= 85.230358607545669169387065607042716656099455006720445273908978980419756337051044562996717183883930534131496965420209481445721702;
	weights[28] 	= 8.7663710117162041472932760732880567685864132398677157264223741750386780841075201647066496576838586230722759733884e-37;

	nodes[29] 	= 95.188939891525629981308606853957324559609689457043193674107847180991465047190631081717206354023200625993073521222065852829589759;
	weights[29] 	= 5.03636439211614904112971723165824600976587895344114658838811635577919473654627399026628244684570849195023289282615e-41;

	nodes[30] 	= 107.95224382757871475002440117665558513156426340321213920572772432410635776663885478648478482298640281519208378387447003564582784;
	weights[30] 	= 1.9909984582531456482439549080329952632862953956263871836638283908349062072873584675434856757612335190852193577397224e-46;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_31_hpp__)*/