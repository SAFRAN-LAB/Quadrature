//
//        Gauss_Laguerre_Nodes_and_Weights_44.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:34.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 44.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_44_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_44_hpp__

void Gauss_Laguerre_Nodes_and_Weights_44(long double*& nodes, long double*& weights) {
	nodes	= new long double[44];
	weights	= new long double[44];

	nodes[0] 	= 0.032491102009891548652356758577332501290022318430434766820698953057290737726659492364538225158458056966375553501484831494319526857;
	weights[0] 	= 0.080721916657043033687178372399000480933165698181038772758639040309644627806203973566972418920962106895961429812734994704440001;

	nodes[1] 	= 0.17123817581147099156838588521036627048408112034304645271340087092043267545550986904258873629357240621108980139819801735588073323;
	weights[1] 	= 0.1636468376865024977368573509970972250537382176467227550031389856307849868907997063677351754474091285817884991175389166140748;

	nodes[2] 	= 0.4210366662035070036517112460281600689576261986377498238361528962523067099171859379486067226961224380236430940267512129212145505;
	weights[2] 	= 0.200482004171877392435297092639325845232628740462768282562439083351650090265361546681981218302742654904475969152730001516617;

	nodes[3] 	= 0.78225492892140341677827312275206623882183532727358413465427605420455775975060229461748264867947565334961181819732984904736281004;
	weights[3] 	= 0.19075711214018403658622169626189822585445616533548845428002790788387313031194292301217648953594608685616047336443165216051;

	nodes[4] 	= 1.2553546349398592816101847876077849803233189773070211077867842490573209634732433491684605769572113134916826052597505890095707152;
	weights[4] 	= 0.1508168593611155573004858516797547169076667542769100356517471162941741526571400755947247463662272814593483692707132354315;

	nodes[5] 	= 1.8409374130893730666473916241224756237196818737119902297405266885709769359423157915360683295309015060450200226050708733475857246;
	weights[5] 	= 0.101875031268670653781369456530377912193094722267064781052306017687390247052448816044671713859214407879218509653892524223;

	nodes[6] 	= 2.5397531805693488219917535617557558584514730166738740817672528566576688518161230645157959503362274000367296444218122602026081779;
	weights[6] 	= 0.05961566916014830068522393095909221673880175038586696948171738319239125172420412542069805374332690288273697536342965796;

	nodes[7] 	= 3.3527062878881513300508804460166387656340002604469917095729109168707946900776495423033301489882520296279648122108375263449002697;
	weights[7] 	= 0.0304536015267120884020593814808758105841749957767499772370706897437834153888999818216897071984649554538598117625538338;

	nodes[8] 	= 4.2808623390397896540676644572448423196649388982908707443167544262111267203090093965925022377018350382541714003312317773906583597;
	weights[8] 	= 0.013639238157495726823547402383712879557840954395724524611443209239396335537661070602540963511715908964621694390579124;

	nodes[9] 	= 5.3254562311950980117590491448486897971458105717509481326417017068838768587715680139784291352533785349458656014403254358941224574;
	weights[9] 	= 0.005368648977600139943660647802848678531152416483428861171725932143544228085149526423655001761171271733274444397400115;

	nodes[10] 	= 6.487901657100200898707656136644095994562347657027100160705589030971236547984516880124476320010282577228726495526783362074714482;
	weights[10] 	= 0.00185939633967041358292669755330500478850240796747316104793109080248508175254990015553205850418374237498432355840118;

	nodes[11] 	= 7.7698022801391393551016861157718320179731702686836591477137529167995890568038502997016227143832717711728972050928137564806166149;
	weights[11] 	= 0.00056681211636486238120457454148389163943653908111254130012901306360802529773828516431072795821593068165463404824484;

	nodes[12] 	= 9.1729648155123339985128633033049819785371457030688243428371551849421274788234988407339167105166888145635487980517202708672572678;
	weights[12] 	= 0.00015202198109067774847359027611200174943710617964115829803157056875261411988700880053179976926581591374236134327867;

	nodes[13] 	= 10.699414295322846002894889017482307807034745233797310339738827074661487232997662565651118074630485059239180798338599944758470267;
	weights[13] 	= 0.00003584096973313147504687399530445571081204490974899905380984728721253440992321739719056437274077308411589934554207;

	nodes[14] 	= 12.351411854387122414525534295109402310446734996766382383420598841664932985615672655452365367402253874898527037335553842295277636;
	weights[14] 	= 7.41759439067371624366860293652430992838934854547936875830929344168362905127343508646763960965393916477521329548e-6;

	nodes[15] 	= 14.131475448155771761851897584118099953642380725293738582002555708667466276094919820693091731527985871165252120898066798917426166;
	weights[15] 	= 1.34516543982531082061160474019655021830324214638029202599373762959076045956282761384685715707234929102026985037e-6;

	nodes[16] 	= 16.042404007748893277503714221833267254337310629239436198765022293982399549774107500461038554546100188673420543511095770142905015;
	weights[16] 	= 2.1328501793815213921123799055052038077355535587996628980452602739996695285592596604395564140887461256894008308e-7;

	nodes[17] 	= 18.087305655181373049492657329005255877963464528882668293061083305955428424749106475681802376105632324557903258635192656418541615;
	weights[17] 	= 2.94906329554239452251704929822925048199142866072772772313912185204202051451925474687918912780498589135281791e-8;

	nodes[18] 	= 20.269630751903115872182185635732406037649137589120001276857651407058943982803306209619451085586350028019169273634016151834864566;
	weights[18] 	= 3.54514174630907166915314838966347604996954275463199299539534037167094019186023485795287588518879203469745146e-9;

	nodes[19] 	= 22.593210746149934807493989699364560671915883255579319691474006820325732575651592694122686571313103138712114316713266513145750181;
	weights[19] 	= 3.69237254158924356085132911081126203605187567203216065707879066970540999339567348192385271653568456541522381e-10;

	nodes[20] 	= 25.062304033571887876801658414932744765795540178557087157764378565596316178160324851045119652416096640251259327475005293770380208;
	weights[20] 	= 3.3188838105772107803249734038016814739380512049290131777207686235181085933884734772422538182549960147174874e-11;

	nodes[21] 	= 27.681650371089359720708975412424951940598052366709829458075434598833481097687792335909260874043951985080882185773486815368740134;
	weights[21] 	= 2.5630778362084552022516207937721303533043808025515233958689198135822192951562925911730364983428066327439878e-12;

	nodes[22] 	= 30.456535814027974505964999658644964352130187259162882442092993355504169608481364811414971798797231308586195663317633313430150631;
	weights[22] 	= 1.6921351798562200845304611660902461855163105754605135262449386697630823857758895118421043363102207623301549e-13;

	nodes[23] 	= 33.392870721505014605893415167838189606113251265754405162492172481031241027083434444195639411868178975821254827560067304347232623;
	weights[23] 	= 9.49626836373697008127119818717203343724653018084092835912761146633625333650505611408107711664729409896017e-15;

	nodes[24] 	= 36.497284153138553231914221679940765652875658579202601182863371415470448439645791737026878020752494621174562765859579412402716931;
	weights[24] 	= 4.501313061774716994332220039506949670212004267557913650557997039646465292574184383095539707573321963242942e-16;

	nodes[25] 	= 39.777239047486089556929759755181549236477671525782724724514837146211645856237335101668126552909014466472573495686478600188084239;
	weights[25] 	= 1.789173026950498584139141263629048831184781555721632857667250012618756040924968789819191010788081136102945e-17;

	nodes[26] 	= 43.241174058322882201466561704995778599024796247916245978895834136706202965131273232887134645551732620981762600644871307552232423;
	weights[26] 	= 5.91461703020143543124819082859343521687835247594314840703413450334308457517958715260828483002364730947163e-19;

	nodes[27] 	= 46.898680026400839804018447151294296536831324258077401518793916859677979889366628485676912840781521583503687028162841674709542276;
	weights[27] 	= 1.61100880763015669821423336930303171563183090630611758940895225353409908817746962314266366415873625619441e-20;

	nodes[28] 	= 50.760722089977991274988654715006513386909876859090871415201300687391257673325125812688681867764956692997385657616749494974048195;
	weights[28] 	= 3.57692533944334210611779690557170542550747243915308929987395564764062559750774298622414689675708364773629e-22;

	nodes[29] 	= 54.839922879698535962373485799047588501608461921002749522373977957778094432618782997350421983421985317741186648090986091724949645;
	weights[29] 	= 6.39431849367333524312480658742527170408333299894815570096897469995922249018743922500288873432871784375109e-24;

	nodes[30] 	= 59.150928909531060329798301054634308752581937758486677080280330497237255448546822203542767807670964735829247265306423945760350364;
	weights[30] 	= 9.0722659997989230907565596598431602377330182860305749250708449846285200296599656872693819197279204810854e-26;

	nodes[31] 	= 63.710892526662217349835512140639331765872728058606121123840282150024074981310050101384370565381721152031773493018825229432838571;
	weights[31] 	= 1.0045415380509179407937796945372806294905545825600252140284344002869922991574313536986498687687151797982e-27;

	nodes[32] 	= 68.54011798998537181891692132860785642669879539068791871584469398139776612329828598162422516053214410630019286367299143525160258;
	weights[32] 	= 8.50940740428322417734782412868171357400850854821120332076672561997826684122370352652350740153596721084628e-30;

	nodes[33] 	= 73.662946690570566176519681071857135543473777551410092696429026594221575930410477024545820774153987642110762581578101081322533914;
	weights[33] 	= 5.38442409066063917806189664395711812716682502099016144173247821634292460766423035043632378070572191246963e-32;

	nodes[34] 	= 79.109001271316640530327133089346950722775734591547043809887672056410670732079123170948986848411924082153565767114975852108940142;
	weights[34] 	= 2.47213127070889787900765586313828614792101964324014906144095891068086478729013232698258565606581157358664e-34;

	nodes[35] 	= 84.914987385294541798316540316767204380950610751001248507423197250173706620106064856651017629124240069206034678075163586457136873;
	weights[35] 	= 7.94463264706262817713037067037912326356410089281552840273420502958435335332668810899516159144098590256723e-37;

	nodes[36] 	= 91.127398402554592499435877869073255298205488941872774402655955807954767595417593316534641694938964394114212670372651834394304197;
	weights[36] 	= 1.707567300653485859747825244820361000524107684666930939267047639307224954687557274268139348381920027080706e-39;

	nodes[37] 	= 97.8067572126890511103771597556957952349008563904684318081180907699399692586549191437034809051114086781986081861683594694460081;
	weights[37] 	= 2.313584762386537183966649018354817810566263899003121564474835456705393270119263904553514956663304243798687e-42;

	nodes[38] 	= 105.03464200510522461810295269835106300263008562100309080341687069941373208435358723669306164608671560315553360663882154545390163;
	weights[38] 	= 1.8248279941640302341766631227043640947036970964567219961765536202290524297168129885273699527553786459034505e-45;

	nodes[39] 	= 112.92616932842080680467801727193675192939487089468159905023129646454123918621940729201430254275728339512100071333600511030718965;
	weights[39] 	= 7.4906320001857964082592955938601740436255566485283225008952056634507447959063492034519406510089236144684756e-49;

	nodes[40] 	= 121.65435750452927995045507614557480278373072736213007420590991961996714800749064982866758086514361183664417105489548659451386121;
	weights[40] 	= 1.352922915013298687283754388347672544923840670197431256516278509334567050416108650580061597877403558304615595e-52;

	nodes[41] 	= 131.50445027042242802975991782416368768612461331930532966639474914071824837857840295953424314877710004171379248045565871155828864;
	weights[41] 	= 8.163588077956982995800901431549006967829338765172502085331936075362567664612866263709568244787069625670667394e-57;

	nodes[42] 	= 143.02290852939820170662593917172199091161645538674333243599563927302238086788929093823139798627128180580259798930169892606730315;
	weights[42] 	= 9.7491969325256837961035550591735316887822969371893654952920114824518071120620306842903588777004345050920184008e-62;

	nodes[43] 	= 157.61844630703226397074606642979220065412338837047451553007735628706093060336937144175158255971390021982486224874723592951361654;
	weights[43] 	= 6.096876660597014090811052459255498916776432393520940443559161933816248351536585943346251507929725393361809064387e-68;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_44_hpp__)*/