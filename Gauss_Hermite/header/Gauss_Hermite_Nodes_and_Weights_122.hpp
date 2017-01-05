//
//        Gauss_Hermite_Nodes_and_Weights_122.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 122.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_122_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_122_hpp__

void Gauss_Hermite_Nodes_and_Weights_122(long double*& nodes, long double*& weights) {
	nodes	= new long double[122];
	weights	= new long double[122];

	nodes[0] 	= -0.1003547657228321955383806505529385494458060660431611769255001754010715327794625739551753481869382712660213255569711017005017057;
	weights[0] 	= 0.1987010370408159812315273508862779612222343312046491528108222212447169691193303343090024380477079729529892970728648593083401346;

	nodes[1] 	= 0.1003547657228321955383806505529385494458060660431611769255001754010715327794625739551753481869382712660213255569711017005017057;
	weights[1] 	= 0.1987010370408159812315273508862779612222343312046491528108222212447169691193303343090024380477079729529892970728648593083401346;

	nodes[2] 	= -0.30108080153124560912944482995540182674484456901506220415758926460170746675889766035295315042989873176230172198003582282714812762;
	weights[2] 	= 0.183348235780074404910977699168633354971805300556224527185139049392790834946854387809302782767163581448677025779774144273521201;

	nodes[3] 	= 0.30108080153124560912944482995540182674484456901506220415758926460170746675889766035295315042989873176230172198003582282714812762;
	weights[3] 	= 0.183348235780074404910977699168633354971805300556224527185139049392790834946854387809302782767163581448677025779774144273521201;

	nodes[4] 	= -0.50185638573956481105689358278417435575325303790913816942424396013575681780616535237266832199142443417011837137362067216888411124;
	weights[4] 	= 0.1561014798499467929189726196393860386521339320397205402524148699987307946140299432441826820861579913865996444429023489650993;

	nodes[5] 	= 0.50185638573956481105689358278417435575325303790913816942424396013575681780616535237266832199142443417011837137362067216888411124;
	weights[5] 	= 0.1561014798499467929189726196393860386521339320397205402524148699987307946140299432441826820861579913865996444429023489650993;

	nodes[6] 	= -0.70271466854059366149197781339934739650821542928256639438957094743697775675468263176820930558043645723683193848962595417259450906;
	weights[6] 	= 0.122615413771742174468481382617215547819925385476526116556908512133549745021372625872892658311247850228402374363298190846835;

	nodes[7] 	= 0.70271466854059366149197781339934739650821542928256639438957094743697775675468263176820930558043645723683193848962595417259450906;
	weights[7] 	= 0.122615413771742174468481382617215547819925385476526116556908512133549745021372625872892658311247850228402374363298190846835;

	nodes[8] 	= -0.90368897779154558505328047947395116090595330056484047696830352185460858972329421353028642334325606089009735551871885666477580732;
	weights[8] 	= 0.08884270863629604291320669153286671334781540190415340732873794455560204473299263285508782848734115732392722108583514113406;

	nodes[9] 	= 0.90368897779154558505328047947395116090595330056484047696830352185460858972329421353028642334325606089009735551871885666477580732;
	weights[9] 	= 0.08884270863629604291320669153286671334781540190415340732873794455560204473299263285508782848734115732392722108583514113406;

	nodes[10] 	= -1.1048128916400250653096590258272122423686359154165519849300025748508984151250661028591086166671013959211563411767726857874966115;
	weights[10] 	= 0.0593669423126708590904404279670613562185471896280632183221341041509974531619760010815147258873948134223797251186497332141;

	nodes[11] 	= 1.1048128916400250653096590258272122423686359154165519849300025748508984151250661028591086166671013959211563411767726857874966115;
	weights[11] 	= 0.0593669423126708590904404279670613562185471896280632183221341041509974531619760010815147258873948134223797251186497332141;

	nodes[12] 	= -1.3061203127337707301818853756762579426644349594229943765954965403454004937912634512075904801281808238639967401723247954110460671;
	weights[12] 	= 0.036576106509803057035844845316015469919241160313130071030048406658731790778800945401960103497930192416765545575789993499;

	nodes[13] 	= 1.3061203127337707301818853756762579426644349594229943765954965403454004937912634512075904801281808238639967401723247954110460671;
	weights[13] 	= 0.036576106509803057035844845316015469919241160313130071030048406658731790778800945401960103497930192416765545575789993499;

	nodes[14] 	= -1.5076455445008546397252345713806716053831479865656510646392365512080118020227379517057461864042439039706819525797105258387752132;
	weights[14] 	= 0.02077015388612750450494324614979896323953357372549928760309185198793736998215768368431330458716233115369413802467947372;

	nodes[15] 	= 1.5076455445008546397252345713806716053831479865656510646392365512080118020227379517057461864042439039706819525797105258387752132;
	weights[15] 	= 0.02077015388612750450494324614979896323953357372549928760309185198793736998215768368431330458716233115369413802467947372;

	nodes[16] 	= -1.7094233700136700428612199533126985844848463448218800742961000896208634046151740859773236717085256695733257646325942450245088657;
	weights[16] 	= 0.0108669142483427826394526818762781984038178052149451010983175087145618836216749740298569379695512114666538274248844008;

	nodes[17] 	= 1.7094233700136700428612199533126985844848463448218800742961000896208634046151740859773236717085256695733257646325942450245088657;
	weights[17] 	= 0.0108669142483427826394526818762781984038178052149451010983175087145618836216749740298569379695512114666538274248844008;

	nodes[18] 	= -1.9114891339837409845171993700735456561546998593179989467765489133335599931039711233617448306479871959184267056205318014011014021;
	weights[18] 	= 0.005236083385906772608698772949653739662715977568398782591024871436638566572802298729937419622245561226972207179866152;

	nodes[19] 	= 1.9114891339837409845171993700735456561546998593179989467765489133335599931039711233617448306479871959184267056205318014011014021;
	weights[19] 	= 0.005236083385906772608698772949653739662715977568398782591024871436638566572802298729937419622245561226972207179866152;

	nodes[20] 	= -2.1138788284758952472132845215710274831977827351680267721880597719039772008830386311798007612801989102346622826375094518013400196;
	weights[20] 	= 0.00232233089828273064525823896295471893881163259212492011388741813494529267295795304633253141772730375278944878304537;

	nodes[21] 	= 2.1138788284758952472132845215710274831977827351680267721880597719039772008830386311798007612801989102346622826375094518013400196;
	weights[21] 	= 0.00232233089828273064525823896295471893881163259212492011388741813494529267295795304633253141772730375278944878304537;

	nodes[22] 	= -2.3166291829805913869824194659751767416767328567851401200870529791559904448202381820930036794447974105624764257884958373169855893;
	weights[22] 	= 0.00094757899341760841673735855166965275845991910623585905353868846804949474576012859004249225753410426130498495637678;

	nodes[23] 	= 2.3166291829805913869824194659751767416767328567851401200870529791559904448202381820930036794447974105624764257884958373169855893;
	weights[23] 	= 0.00094757899341760841673735855166965275845991910623585905353868846804949474576012859004249225753410426130498495637678;

	nodes[24] 	= -2.5197777595433380351674141470619199309880618214267075073679537684802357743204239553473675274126602829573264574845582054006371971;
	weights[24] 	= 0.0003554751249661078094128931940564774599466269256310559695078263885592709452671107584099454348150309988787144057016;

	nodes[25] 	= 2.5197777595433380351674141470619199309880618214267075073679537684802357743204239553473675274126602829573264574845582054006371971;
	weights[25] 	= 0.0003554751249661078094128931940564774599466269256310559695078263885592709452671107584099454348150309988787144057016;

	nodes[26] 	= -2.7233630537216097573046214276129374118418832898059895585132333590532914859828370122693338532663261015182636866910248039648854263;
	weights[26] 	= 0.0001225195012164654636887729694641842941026052650477373149511109218020677377424532499397056575962447662507734970523;

	nodes[27] 	= 2.7233630537216097573046214276129374118418832898059895585132333590532914859828370122693338532663261015182636866910248039648854263;
	weights[27] 	= 0.0001225195012164654636887729694641842941026052650477373149511109218020677377424532499397056575962447662507734970523;

	nodes[28] 	= -2.9274246022241843752588131558021177117861233005761904802272295839768304508994789042205908656965536346337624792529843880744152033;
	weights[28] 	= 0.000038767965827716025322551472601889302209570214220917763923180660703952737509530167292632818277100161185513775747;

	nodes[29] 	= 2.9274246022241843752588131558021177117861233005761904802272295839768304508994789042205908656965536346337624792529843880744152033;
	weights[29] 	= 0.000038767965827716025322551472601889302209570214220917763923180660703952737509530167292632818277100161185513775747;

	nodes[30] 	= -3.1320030981875178358304592433576445349389612858782359656706835870057016897858299160026704497996619393146634904855519262521790248;
	weights[30] 	= 0.000011252541495603310349273210860382978063418014350751675091376031496401584627588182947561930045096064689303323685;

	nodes[31] 	= 3.1320030981875178358304592433576445349389612858782359656706835870057016897858299160026704497996619393146634904855519262521790248;
	weights[31] 	= 0.000011252541495603310349273210860382978063418014350751675091376031496401584627588182947561930045096064689303323685;

	nodes[32] 	= -3.337140515161212821674153408665761969662885042439307242354966098638698628196816294447018985199094706925758209519201615000978546;
	weights[32] 	= 2.99324989835909826050102687998249990574409514796493825434497446754576909190801881770488723607492619382092665e-6;

	nodes[33] 	= 3.337140515161212821674153408665761969662885042439307242354966098638698628196816294447018985199094706925758209519201615000978546;
	weights[33] 	= 2.99324989835909826050102687998249990574409514796493825434497446754576909190801881770488723607492619382092665e-6;

	nodes[34] 	= -3.5428802410129705969812633874514993222304054627552362263709173215010088921731788551661079273449504555200778751185872096446577334;
	weights[34] 	= 7.2898765543366559580835207394502116908249698162770889954667106648146770113717087112372154401945661789456591e-7;

	nodes[35] 	= 3.5428802410129705969812633874514993222304054627552362263709173215010088921731788551661079273449504555200778751185872096446577334;
	weights[35] 	= 7.2898765543366559580835207394502116908249698162770889954667106648146770113717087112372154401945661789456591e-7;

	nodes[36] 	= -3.7492672231264832967704878392746338500273748327985795873117078577760157319129216504211450353182085992830094125918252808143010523;
	weights[36] 	= 1.6237364967913392888968873397265617169353498900026745061128735048120678757118028126995484199908329043525754e-7;

	nodes[37] 	= 3.7492672231264832967704878392746338500273748327985795873117078577760157319129216504211450353182085992830094125918252808143010523;
	weights[37] 	= 1.6237364967913392888968873397265617169353498900026745061128735048120678757118028126995484199908329043525754e-7;

	nodes[38] 	= -3.9563481264582307877204020728827032563186816899682492989867094350447064874703705531669381967387795971897661909391532373101305252;
	weights[38] 	= 3.303874344833811854817963298407093978384086354355016226108096254154440760705798498674743262322933328849081e-8;

	nodes[39] 	= 3.9563481264582307877204020728827032563186816899682492989867094350447064874703705531669381967387795971897661909391532373101305252;
	weights[39] 	= 3.303874344833811854817963298407093978384086354355016226108096254154440760705798498674743262322933328849081e-8;

	nodes[40] 	= -4.1641715062468731445249192492141264659684968761898446122953931784716674536483376998142617266605641774372310820169339463054117578;
	weights[40] 	= 6.13334155307087775699125268596851552375791103523907141636346019410588127714886690981748604006340106858112e-9;

	nodes[41] 	= 4.1641715062468731445249192492141264659684968761898446122953931784716674536483376998142617266605641774372310820169339463054117578;
	weights[41] 	= 6.13334155307087775699125268596851552375791103523907141636346019410588127714886690981748604006340106858112e-9;

	nodes[42] 	= -4.3727879974390057841564884440631006141691915483163687665382572496633906460382301233848498312721795960696374549249039409446890065;
	weights[42] 	= 1.03739814566653710484019052076025985924130290698014107780198368377326421491576596984212076573043525553301e-9;

	nodes[43] 	= 4.3727879974390057841564884440631006141691915483163687665382572496633906460382301233848498312721795960696374549249039409446890065;
	weights[43] 	= 1.03739814566653710484019052076025985924130290698014107780198368377326421491576596984212076573043525553301e-9;

	nodes[44] 	= -4.5822505232162974694023109608528923032886885200688587321798431325226941255490085401111767305800842634702697052872584370845029658;
	weights[44] 	= 1.5963585528134856021375691956808977138553800070265519833806472677256232042902617759738726851655474187792e-10;

	nodes[45] 	= 4.5822505232162974694023109608528923032886885200688587321798431325226941255490085401111767305800842634702697052872584370845029658;
	weights[45] 	= 1.5963585528134856021375691956808977138553800070265519833806472677256232042902617759738726851655474187792e-10;

	nodes[46] 	= -4.7926145253924430374833776662095370505764025146455864667106253410077141973882718631427964556741854806293320568599168485902340794;
	weights[46] 	= 2.231329014295877840153708295555147501302520465456782193914993016925744371226036689645889935042037321678e-11;

	nodes[47] 	= 4.7926145253924430374833776662095370505764025146455864667106253410077141973882718631427964556741854806293320568599168485902340794;
	weights[47] 	= 2.231329014295877840153708295555147501302520465456782193914993016925744371226036689645889935042037321678e-11;

	nodes[48] 	= -5.003938219907659055676686259713620439772275608778920064714543757733162852938492299648250890514832050660519996591579140305557454;
	weights[48] 	= 2.828148991972852423427003235625915216364978471304801727773707601185591466043826089185340381457007995315e-12;

	nodes[49] 	= 5.003938219907659055676686259713620439772275608778920064714543757733162852938492299648250890514832050660519996591579140305557454;
	weights[49] 	= 2.828148991972852423427003235625915216364978471304801727773707601185591466043826089185340381457007995315e-12;

	nodes[50] 	= -5.216282881200878402774653447182395324316038892344156925080796073789074198330982720411284585175174502608003953178927174078755368;
	weights[50] 	= 3.24448143167220885424248729990523656969622463546899260277149695853898077295437101471389742003027535567e-13;

	nodes[51] 	= 5.216282881200878402774653447182395324316038892344156925080796073789074198330982720411284585175174502608003953178927174078755368;
	weights[51] 	= 3.24448143167220885424248729990523656969622463546899260277149695853898077295437101471389742003027535567e-13;

	nodes[52] 	= -5.4297131599071496274515863285557840486102507085984613112999303966944953381697496971433912652402311571508342521188775110170983339;
	weights[52] 	= 3.36223607618979755531284608350679288003724498297958567353286930574820586288712722606822531069759366672e-14;

	nodes[53] 	= 5.4297131599071496274515863285557840486102507085984613112999303966944953381697496971433912652402311571508342521188775110170983339;
	weights[53] 	= 3.36223607618979755531284608350679288003724498297958567353286930574820586288712722606822531069759366672e-14;

	nodes[54] 	= -5.6442974391377128627324241793452924183380670673100365193853410410669002386584711029334177204457492955485405211120652716690152113;
	weights[54] 	= 3.1406382865933394290616173766410474335279097100144049475579271230415078315798828723601042555285217869e-15;

	nodes[55] 	= 5.6442974391377128627324241793452924183380670673100365193853410410669002386584711029334177204457492955485405211120652716690152113;
	weights[55] 	= 3.1406382865933394290616173766410474335279097100144049475579271230415078315798828723601042555285217869e-15;

	nodes[56] 	= -5.8601082355882230123572576632465037784853238575902684903792374031453102260812942849453739390611647691235190242045405795524845557;
	weights[56] 	= 2.638193082354172840440777023265354769286431384299084986058748192997062381235716572615203661046977512e-16;

	nodes[57] 	= 5.8601082355882230123572576632465037784853238575902684903792374031453102260812942849453739390611647691235190242045405795524845557;
	weights[57] 	= 2.638193082354172840440777023265354769286431384299084986058748192997062381235716572615203661046977512e-16;

	nodes[58] 	= -6.0772226529322165816174794867039670367150741766783898830678490751153384433885737332737021458960351443132705236287109322054599076;
	weights[58] 	= 1.987946127356318557718923563387714443523325408544773401333667958755454892456035546534088505394694193e-17;

	nodes[59] 	= 6.0772226529322165816174794867039670367150741766783898830678490751153384433885737332737021458960351443132705236287109322054599076;
	weights[59] 	= 1.987946127356318557718923563387714443523325408544773401333667958755454892456035546534088505394694193e-17;

	nodes[60] 	= -6.2957228964512778648890178597728975902319714890216173603123568178322143051956499312910297927856288148388737778068510445148971857;
	weights[60] 	= 1.340086662875806669207647466996827151575860475388166692058367139204099172995244275355342341730855541e-18;

	nodes[61] 	= 6.2957228964512778648890178597728975902319714890216173603123568178322143051956499312910297927856288148388737778068510445148971857;
	weights[61] 	= 1.340086662875806669207647466996827151575860475388166692058367139204099172995244275355342341730855541e-18;

	nodes[62] 	= -6.5156968597076492057357135290358974653231740520639028078071135114827947803097104405158352455350463183829795251710493692590821186;
	weights[62] 	= 8.05774818662731929812170183481321382678662735739963254712423426728514555365428119553528677903087335e-20;

	nodes[63] 	= 6.5156968597076492057357135290358974653231740520639028078071135114827947803097104405158352455350463183829795251710493692590821186;
	weights[63] 	= 8.05774818662731929812170183481321382678662735739963254712423426728514555365428119553528677903087335e-20;

	nodes[64] 	= -6.7372387963808665875251273697415946317846070449166850443124395840712896199783047201034651871935534153471652921846112512168625737;
	weights[64] 	= 4.30784869362441542010788733450602221411409691408508638214504507494227472649426563279584668422908202e-21;

	nodes[65] 	= 6.7372387963808665875251273697415946317846070449166850443124395840712896199783047201034651871935534153471652921846112512168625737;
	weights[65] 	= 4.30784869362441542010788733450602221411409691408508638214504507494227472649426563279584668422908202e-21;

	nodes[66] 	= -6.9604500933022755545828589252613502044667934366842951677777380450794470224308912273422941616704808260798689617105122835045097497;
	weights[66] 	= 2.04063721139269618180918024021769967610989151826485642893486268261178085841795700739848715723000547e-22;

	nodes[67] 	= 6.9604500933022755545828589252613502044667934366842951677777380450794470224308912273422941616704808260798689617105122835045097497;
	weights[67] 	= 2.04063721139269618180918024021769967610989151826485642893486268261178085841795700739848715723000547e-22;

	nodes[68] 	= -7.1854401644106498809379958958525610135163618467222060156254608612501750232547079797481383788419817071747356963012594376208919211;
	weights[68] 	= 8.5327296120896706226611780242741187276835316395488420056846989049777183783249798151309807943226508e-24;

	nodes[69] 	= 7.1854401644106498809379958958525610135163618467222060156254608612501750232547079797481383788419817071747356963012594376208919211;
	weights[69] 	= 8.5327296120896706226611780242741187276835316395488420056846989049777183783249798151309807943226508e-24;

	nodes[70] 	= -7.4123274900628552751740733762907742581762051191368144821418766867410757407109802131566849020553981960065859319487823892463940353;
	weights[70] 	= 3.1364243262134502083886403864189381387228974790034242706973119500444237753519401727266152806372483e-25;

	nodes[71] 	= 7.4123274900628552751740733762907742581762051191368144821418766867410757407109802131566849020553981960065859319487823892463940353;
	weights[71] 	= 3.1364243262134502083886403864189381387228974790034242706973119500444237753519401727266152806372483e-25;

	nodes[72] 	= -7.641240832199190937306923673712755005601715087341927148109520262774719846499656004259270205378417738077568748242970830410663243;
	weights[72] 	= 1.0088930738432746340587242374500033301222004247163779528189481095596829426397856961051415942688586e-26;

	nodes[73] 	= 7.641240832199190937306923673712755005601715087341927148109520262774719846499656004259270205378417738077568748242970830410663243;
	weights[73] 	= 1.0088930738432746340587242374500033301222004247163779528189481095596829426397856961051415942688586e-26;

	nodes[74] 	= -7.8723206637443442003160125961248440799091209134645090517268073984748806441593365361865584897535134590539233749418466135385387165;
	weights[74] 	= 2.8259664729965604461570098815645758909765490342889359147694004163762601088556595788432578510849267e-28;

	nodes[75] 	= 7.8723206637443442003160125961248440799091209134645090517268073984748806441593365361865584897535134590539233749418466135385387165;
	weights[75] 	= 2.8259664729965604461570098815645758909765490342889359147694004163762601088556595788432578510849267e-28;

	nodes[76] 	= -8.1057208609652862896003216102243350682230392860539676240307075730219366144441894617556795541878539653989669714739815596646113926;
	weights[76] 	= 6.855384979895130982543171346153644351119325088274616589882234322409218682385026866816888128618713e-30;

	nodes[77] 	= 8.1057208609652862896003216102243350682230392860539676240307075730219366144441894617556795541878539653989669714739815596646113926;
	weights[77] 	= 6.855384979895130982543171346153644351119325088274616589882234322409218682385026866816888128618713e-30;

	nodes[78] 	= -8.3416107212171426288628445929308611259960655886205328853151316313090624689180670594099843411322175583349391344246146039951125357;
	weights[78] 	= 1.4316070974387092233527796139937320844146061757672472910127791016966016688985278342353085682633179e-31;

	nodes[79] 	= 8.3416107212171426288628445929308611259960655886205328853151316313090624689180670594099843411322175583349391344246146039951125357;
	weights[79] 	= 1.4316070974387092233527796139937320844146061757672472910127791016966016688985278342353085682633179e-31;

	nodes[80] 	= -8.5801773868921560647831896646995012798326178495175804761721040447817841955655068486772546259248398104602724608039559163254121483;
	weights[80] 	= 2.556484413936791166312004865240976062629570369366407722064686390213537418283019718921469292535885e-33;

	nodes[81] 	= 8.5801773868921560647831896646995012798326178495175804761721040447817841955655068486772546259248398104602724608039559163254121483;
	weights[81] 	= 2.556484413936791166312004865240976062629570369366407722064686390213537418283019718921469292535885e-33;

	nodes[82] 	= -8.8216287813441008298642540600949050559551028512342875452923090455312552160652384350932053017787053582876968304057507166898484685;
	weights[82] 	= 3.874909440048529383345647500234917735207720792643673140897247445638180243088637632477433236522348e-35;

	nodes[83] 	= 8.8216287813441008298642540600949050559551028512342875452923090455312552160652384350932053017787053582876968304057507166898484685;
	weights[83] 	= 3.874909440048529383345647500234917735207720792643673140897247445638180243088637632477433236522348e-35;

	nodes[84] 	= -9.066197196897727820127661030525676637083645722656675769998215450371622931338925952017979882823491774925166286231673929360085877;
	weights[84] 	= 4.94388601073098665644095340219078536226379202154418576123733595960600744352176109153717570902447e-37;

	nodes[85] 	= 9.066197196897727820127661030525676637083645722656675769998215450371622931338925952017979882823491774925166286231673929360085877;
	weights[85] 	= 4.94388601073098665644095340219078536226379202154418576123733595960600744352176109153717570902447e-37;

	nodes[86] 	= -9.3141437229916676003138133121436842301465672711157295046179418026330413534938248958824506203910665059813628114072789842711120566;
	weights[86] 	= 5.260225400342517661211597127171357358098845268738469366720161952488593639305687107206434765455888e-39;

	nodes[87] 	= 9.3141437229916676003138133121436842301465672711157295046179418026330413534938248958824506203910665059813628114072789842711120566;
	weights[87] 	= 5.260225400342517661211597127171357358098845268738469366720161952488593639305687107206434765455888e-39;

	nodes[88] 	= -9.5657637705148079001654446201896907537102904970778984933581141290207488993447947233611831718517091827957483812357061342438631045;
	weights[88] 	= 4.618259898960626695046197962938440807990241273476924008146198113594972530454108432967697493501377e-41;

	nodes[89] 	= 9.5657637705148079001654446201896907537102904970778984933581141290207488993447947233611831718517091827957483812357061342438631045;
	weights[89] 	= 4.618259898960626695046197962938440807990241273476924008146198113594972530454108432967697493501377e-41;

	nodes[90] 	= -9.82139404660861847135956587724124298120453834366173950492336282408764114469817163039451066111304078023497448402864268220371701;
	weights[90] 	= 3.305706708604199116276850417505492242878177604871229932749266238582009674796550775412911711377777e-43;

	nodes[91] 	= 9.82139404660861847135956587724124298120453834366173950492336282408764114469817163039451066111304078023497448402864268220371701;
	weights[91] 	= 3.305706708604199116276850417505492242878177604871229932749266238582009674796550775412911711377777e-43;

	nodes[92] 	= -10.081421478842227233085726527609142431782147966463519857741505887732030549424368715923015794970081512792514786333486393384299375;
	weights[92] 	= 1.9026918231732351050153938816101418435985339854527086823396782277797611011432366219513439356517157e-45;

	nodes[93] 	= 10.081421478842227233085726527609142431782147966463519857741505887732030549424368715923015794970081512792514786333486393384299375;
	weights[93] 	= 1.9026918231732351050153938816101418435985339854527086823396782277797611011432366219513439356517157e-45;

	nodes[94] 	= -10.346294805375646064190162008078117429943784841977133433591092453203480517323459222819038774071869836250330069872094779230678908;
	weights[94] 	= 8.666792323198832508927688132165063360930511678563823359749500662226744735788614162836530954185652e-48;

	nodes[95] 	= 10.346294805375646064190162008078117429943784841977133433591092453203480517323459222819038774071869836250330069872094779230678908;
	weights[95] 	= 8.666792323198832508927688132165063360930511678563823359749500662226744735788614162836530954185652e-48;

	nodes[96] 	= -10.616539883571753349827352974896517999191116619066205515880017541541696823188611097799656305192057902888865250236040922406257034;
	weights[96] 	= 3.0664667336419988857038226429365811281899080447258546977508245557935849468290674220575319390246247e-50;

	nodes[97] 	= 10.616539883571753349827352974896517999191116619066205515880017541541696823188611097799656305192057902888865250236040922406257034;
	weights[97] 	= 3.0664667336419988857038226429365811281899080447258546977508245557935849468290674220575319390246247e-50;

	nodes[98] 	= -10.892780302181300381626027802494823239893559353725434117342020964221613574421478337224606594026897821189113781633809634057439416;
	weights[98] 	= 8.2441788250065201156090101393342650806688603645107270748697058692977718158083164229468033178939638e-53;

	nodes[99] 	= 10.892780302181300381626027802494823239893559353725434117342020964221613574421478337224606594026897821189113781633809634057439416;
	weights[99] 	= 8.2441788250065201156090101393342650806688603645107270748697058692977718158083164229468033178939638e-53;

	nodes[100] 	= -11.175765754204675667640271052471450803499963594302453285853886468552269195936461009560561316639657354888955663124113862956074292;
	weights[100] 	= 1.64039280514976649081290050241362909502843928579426444536906900656066974758124559087223889076677561e-55;

	nodes[101] 	= 11.175765754204675667640271052471450803499963594302453285853886468552269195936461009560561316639657354888955663124113862956074292;
	weights[101] 	= 1.64039280514976649081290050241362909502843928579426444536906900656066974758124559087223889076677561e-55;

	nodes[102] 	= -11.466412107936477752303287586254184482567268774692457997361300258391712579529163285791363142619987564104607239974998523435143784;
	weights[102] 	= 2.3396177274687376887153258928993444479209616035924464976854513956955242668620406583756238713820617e-58;

	nodes[103] 	= 11.466412107936477752303287586254184482567268774692457997361300258391712579529163285791363142619987564104607239974998523435143784;
	weights[103] 	= 2.3396177274687376887153258928993444479209616035924464976854513956955242668620406583756238713820617e-58;

	nodes[104] 	= -11.765859735997485731595894090072589109769354891208469029501368350177786094365106734716807175636400093623684030746651346374660258;
	weights[104] 	= 2.299051121917468328360288874393836099877978923286819907205546011685369439750257559106413525317133158e-61;

	nodes[105] 	= 11.765859735997485731595894090072589109769354891208469029501368350177786094365106734716807175636400093623684030746651346374660258;
	weights[105] 	= 2.299051121917468328360288874393836099877978923286819907205546011685369439750257559106413525317133158e-61;

	nodes[106] 	= -12.075561545881943887665060352648193845939727895438185135703782348540021861424937292452063292381580440109194882953851862148406511;
	weights[106] 	= 1.480527403320681641582578279026385583652888527355016163347885393387892241524662409833236990576069943e-64;

	nodes[107] 	= 12.075561545881943887665060352648193845939727895438185135703782348540021861424937292452063292381580440109194882953851862148406511;
	weights[107] 	= 1.480527403320681641582578279026385583652888527355016163347885393387892241524662409833236990576069943e-64;

	nodes[108] 	= -12.397421815284704443436635122179135282112314253185562334087536224376236763565589538810744824652127277691933791211145732827295891;
	weights[108] 	= 5.85441428584847052866570714422602149938994332753138532650197831274511714882953877107719482726680816e-68;

	nodes[109] 	= 12.397421815284704443436635122179135282112314253185562334087536224376236763565589538810744824652127277691933791211145732827295891;
	weights[109] 	= 5.85441428584847052866570714422602149938994332753138532650197831274511714882953877107719482726680816e-68;

	nodes[110] 	= -12.734027506319504984092038444544050598137121755730494259141257061763572876474386775020482245981953830245545227628828946858306926;
	weights[110] 	= 1.30228231629711459183387279313752329918436389754776601287467598072539517211408927099956183742196923061e-71;

	nodes[111] 	= 12.734027506319504984092038444544050598137121755730494259141257061763572876474386775020482245981953830245545227628828946858306926;
	weights[111] 	= 1.30228231629711459183387279313752329918436389754776601287467598072539517211408927099956183742196923061e-71;

	nodes[112] 	= -13.089061813006202980595667919867672621701017033530856390349404781455104609172629055107460003716870430216750836954399339297063228;
	weights[112] 	= 1.440397897652411235324139411371690997153642877746060417425338434912746990590447057048409398731559104639e-75;

	nodes[113] 	= 13.089061813006202980595667919867672621701017033530856390349404781455104609172629055107460003716870430216750836954399339297063228;
	weights[113] 	= 1.440397897652411235324139411371690997153642877746060417425338434912746990590447057048409398731559104639e-75;

	nodes[114] 	= -13.468116622389786185777062024815243765379715871654545920319644170619333988125400933781560808282472536716821203177183537546054021;
	weights[114] 	= 6.583003645365214081629157885056249004404578892987037936498379583202913032494220459489732718674836494317e-80;

	nodes[115] 	= 13.468116622389786185777062024815243765379715871654545920319644170619333988125400933781560808282472536716821203177183537546054021;
	weights[115] 	= 6.583003645365214081629157885056249004404578892987037936498379583202913032494220459489732718674836494317e-80;

	nodes[116] 	= -13.880516899476402267551987870920422090969721087048805352394873328725344542896575742466180987486592751905754106587445223660397831;
	weights[116] 	= 9.1706055028516506493177502520433693926311933990206369973987370154528478547115987533939895973855751419912e-85;

	nodes[117] 	= 13.880516899476402267551987870920422090969721087048805352394873328725344542896575742466180987486592751905754106587445223660397831;
	weights[117] 	= 9.1706055028516506493177502520433693926311933990206369973987370154528478547115987533939895973855751419912e-85;

	nodes[118] 	= -14.344362927004781772447138961616071674005394689365965633938583419377773822742797199655554665799479341884659216402907642768822687;
	weights[118] 	= 2.180629615826707308140674866708680914547549387887804973174136858285039512903967505662872094154301699043375e-90;

	nodes[119] 	= 14.344362927004781772447138961616071674005394689365965633938583419377773822742797199655554665799479341884659216402907642768822687;
	weights[119] 	= 2.180629615826707308140674866708680914547549387887804973174136858285039512903967505662872094154301699043375e-90;

	nodes[120] 	= -14.907046657816621973047465592758358032826398222670745638120029001660035891500058467315489220894169951560317130186114064620440037;
	weights[120] 	= 2.01845342750953745178568667280669588957490065425226174637142786841187797929018380316999884491137712522921448e-97;

	nodes[121] 	= 14.907046657816621973047465592758358032826398222670745638120029001660035891500058467315489220894169951560317130186114064620440037;
	weights[121] 	= 2.01845342750953745178568667280669588957490065425226174637142786841187797929018380316999884491137712522921448e-97;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_122_hpp__)*/