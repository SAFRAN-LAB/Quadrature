//
//        Gauss_Hermite_Nodes_and_Weights_113.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:48.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 113.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_113_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_113_hpp__

void Gauss_Hermite_Nodes_and_Weights_113(long double*& nodes, long double*& weights) {
	nodes	= new long double[113];
	weights	= new long double[113];

	nodes[0] 	= 0;
	weights[0] 	= 0.20851381638716077500478837696576863321627093119991877845857422322908711341769142490166212194902656352739846495833737667435612811;

	nodes[1] 	= -0.20852047314122536933264447338943324462716139889659870394361576719010916251137210640645234770657550095520832671708955442492787157;
	weights[1] 	= 0.199660873457028599207390878842135478311837713521517465602015643879711633258532414624861359919080332623698339934367595124424407;

	nodes[2] 	= 0.20852047314122536933264447338943324462716139889659870394361576719010916251137210640645234770657550095520832671708955442492787157;
	weights[2] 	= 0.199660873457028599207390878842135478311837713521517465602015643879711633258532414624861359919080332623698339934367595124424407;

	nodes[3] 	= -0.41708090670945613252196056471559200261201985556240543856539405201128541739808653902335670722695494747318423395480836380983994764;
	weights[3] 	= 0.17528831212387202535849195125534101636123954777214782290667112337733660860567734895675498442816285622910677580355933574472101;

	nodes[4] 	= 0.41708090670945613252196056471559200261201985556240543856539405201128541739808653902335670722695494747318423395480836380983994764;
	weights[4] 	= 0.17528831212387202535849195125534101636123954777214782290667112337733660860567734895675498442816285622910677580355933574472101;

	nodes[5] 	= -0.62572136079995640201649886422471522919304892115545909759760552079583343940148243235136667291937351111244339164921236661660498057;
	weights[5] 	= 0.141081986349810270024462675547392631261604783966337345880104391461200062488534876116174535859044025770918470908937043579875;

	nodes[6] 	= 0.62572136079995640201649886422471522919304892115545909759760552079583343940148243235136667291937351111244339164921236661660498057;
	weights[6] 	= 0.141081986349810270024462675547392631261604783966337345880104391461200062488534876116174535859044025770918470908937043579875;

	nodes[7] 	= -0.83448209557097703961977326380051423651793408545413174321616706984518618827815672461771929532523745648561256868249257650816167574;
	weights[7] 	= 0.10408220923468041592943196453285636993680183701273761899146945819316852175526220638497039672923307415185438782413954103681;

	nodes[8] 	= 0.83448209557097703961977326380051423651793408545413174321616706984518618827815672461771929532523745648561256868249257650816167574;
	weights[8] 	= 0.10408220923468041592943196453285636993680183701273761899146945819316852175526220638497039672923307415185438782413954103681;

	nodes[9] 	= -1.0434036731020315655319019529652301390015494653559996782115860822262846353283973316758414442717616620246844562358668480057241922;
	weights[9] 	= 0.0703665311919077097060041471655121711636379737627894215016098131043884231041755319209299412634439839538349242091010500627;

	nodes[10] 	= 1.0434036731020315655319019529652301390015494653559996782115860822262846353283973316758414442717616620246844562358668480057241922;
	weights[10] 	= 0.0703665311919077097060041471655121711636379737627894215016098131043884231041755319209299412634439839538349242091010500627;

	nodes[11] 	= -1.2525270614742766556171577478719420517300571535445710231936887902176747843832654854683145185049531636283449132495743040056066683;
	weights[11] 	= 0.043582193779905827286263724935648081577958047020519533649924581861831612071497641764555338754965558694129553190860130487;

	nodes[12] 	= 1.2525270614742766556171577478719420517300571535445710231936887902176747843832654854683145185049531636283449132495743040056066683;
	weights[12] 	= 0.043582193779905827286263724935648081577958047020519533649924581861831612071497641764555338754965558694129553190860130487;

	nodes[13] 	= -1.461893741864429832889622534881393449526802606088746704227696844358787199938838405828194172101998634076132940651482370797178204;
	weights[13] 	= 0.02471972290845637757472377196904475580400395471671391501008458896452335051744380336333435274107866362881010078937350388;

	nodes[14] 	= 1.461893741864429832889622534881393449526802606088746704227696844358787199938838405828194172101998634076132940651482370797178204;
	weights[14] 	= 0.02471972290845637757472377196904475580400395471671391501008458896452335051744380336333435274107866362881010078937350388;

	nodes[15] 	= -1.6715458194887483760227452017352390497807906918065823207439689452896508676776172935082459137482281350557926176964857272257221123;
	weights[15] 	= 0.0128344391964388782200640265066692472654412436788444087255918377154351012681374172370884275246817925220892690847602737;

	nodes[16] 	= 1.6715458194887483760227452017352390497807906918065823207439689452896508676776172935082459137482281350557926176964857272257221123;
	weights[16] 	= 0.0128344391964388782200640265066692472654412436788444087255918377154351012681374172370884275246817925220892690847602737;

	nodes[17] 	= -1.8815261392920378828722580990443871483193163799495711554833831739838110078600567488541818269753890424280523170870482782055732642;
	weights[17] 	= 0.0060965525061442340656931956481931168466136140620290674655436789142857074762872444868277433960638419175505038849813839;

	nodes[18] 	= 1.8815261392920378828722580990443871483193163799495711554833831739838110078600567488541818269753890424280523170870482782055732642;
	weights[18] 	= 0.0060965525061442340656931956481931168466136140620290674655436789142857074762872444868277433960638419175505038849813839;

	nodes[19] 	= -2.0918784073499570931003086364996000231716786531572267272020947789601853281291478036955937448691508293547559146431357201192625674;
	weights[19] 	= 0.002647941052162797350055431405731081184185359793924725035216417699045292538772466171462478262641266332114509126095418;

	nodes[20] 	= 2.0918784073499570931003086364996000231716786531572267272020947789601853281291478036955937448691508293547559146431357201192625674;
	weights[20] 	= 0.002647941052162797350055431405731081184185359793924725035216417699045292538772466171462478262641266332114509126095418;

	nodes[21] 	= -2.3026473190429602124583374398899238325867129658316483623313983864292930330453143858877323303732352600956984333630684316730412018;
	weights[21] 	= 0.00105089004548891268383384723914169645697129453302560523333359440397829586391953498660597994869218303063569765252932;

	nodes[22] 	= 2.3026473190429602124583374398899238325867129658316483623313983864292930330453143858877323303732352600956984333630684316730412018;
	weights[22] 	= 0.00105089004548891268383384723914169645697129453302560523333359440397829586391953498660597994869218303063569765252932;

	nodes[23] 	= -2.5138786951694908674127667504675200575148119524120684823791813788172413179146087018860030820471242745794608816392177710177264227;
	weights[23] 	= 0.00038080638386839601115673717019908574306561493797488108234419886826495805179558035628322731553617828641489015889851;

	nodes[24] 	= 2.5138786951694908674127667504675200575148119524120684823791813788172413179146087018860030820471242745794608816392177710177264227;
	weights[24] 	= 0.00038080638386839601115673717019908574306561493797488108234419886826495805179558035628322731553617828641489015889851;

	nodes[25] 	= -2.7256196272975336639264254957916633933895119094164296259834564685053237855420657396075410233953682349457419630365949862614356778;
	weights[25] 	= 0.0001258882553826032722544459070858324618198312021890925020161950307140260267730683004148547496561512172372062653762;

	nodes[26] 	= 2.7256196272975336639264254957916633933895119094164296259834564685053237855420657396075410233953682349457419630365949862614356778;
	weights[26] 	= 0.0001258882553826032722544459070858324618198312021890925020161950307140260267730683004148547496561512172372062653762;

	nodes[27] 	= -2.9379186338110883469788140783864216262897565211221698014937193207235462973690389633120378705651046227208350411314116794237194427;
	weights[27] 	= 0.000037931294208686353252335155556996322510283621270114896268805274028050731063479684568334712674239548983614575327;

	nodes[28] 	= 2.9379186338110883469788140783864216262897565211221698014937193207235462973690389633120378705651046227208350411314116794237194427;
	weights[28] 	= 0.000037931294208686353252335155556996322510283621270114896268805274028050731063479684568334712674239548983614575327;

	nodes[29] 	= -3.1508258282961985938632197333880280358521493456523926554112745906588809904926999831592464687824741973631527152366843817803723538;
	weights[29] 	= 0.0000104063469198689451602189847109826380361975457524694831719567197701353530133579665515332399478218269621774797385;

	nodes[30] 	= 3.1508258282961985938632197333880280358521493456523926554112745906588809904926999831592464687824741973631527152366843817803723538;
	weights[30] 	= 0.0000104063469198689451602189847109826380361975457524694831719567197701353530133579665515332399478218269621774797385;

	nodes[31] 	= -3.3643931021355880885575641462499935065519408968441114522329128474834962642651966890028022253595730774432465880307616086218128239;
	weights[31] 	= 2.596575636044106235878115928421399183791605737029874875613983471957942280905699597122202814005231393754877549e-6;

	nodes[32] 	= 3.3643931021355880885575641462499935065519408968441114522329128474834962642651966890028022253595730774432465880307616086218128239;
	weights[32] 	= 2.596575636044106235878115928421399183791605737029874875613983471957942280905699597122202814005231393754877549e-6;

	nodes[33] 	= -3.578674323448854099300892272275307182596754733664056031310239697655908776849223571958856705223718708050293888944994603418074849;
	weights[33] 	= 5.88537471250419785349597230351054228325520755911090518261989572555070751947478342905411309225568512156446309e-7;

	nodes[34] 	= 3.578674323448854099300892272275307182596754733664056031310239697655908776849223571958856705223718708050293888944994603418074849;
	weights[34] 	= 5.88537471250419785349597230351054228325520755911090518261989572555070751947478342905411309225568512156446309e-7;

	nodes[35] 	= -3.793725554835397347071310451364175989012997453385618921206246668774084526984708491125882801434744192721364123673137147608310471;
	weights[35] 	= 1.21014630981167987876507148314054338153130234689922857884852118814030962760750605106012451511286858188204685e-7;

	nodes[36] 	= 3.793725554835397347071310451364175989012997453385618921206246668774084526984708491125882801434744192721364123673137147608310471;
	weights[36] 	= 1.21014630981167987876507148314054338153130234689922857884852118814030962760750605106012451511286858188204685e-7;

	nodes[37] 	= -4.0096052927608690569655712211385973599374927571073311756373654273039671092598288533085100574270185100065065176710796577387685683;
	weights[37] 	= 2.2540365079384085983060690765163094174787327981175414191371842877364483527906992027033984263689329258223079e-8;

	nodes[38] 	= 4.0096052927608690569655712211385973599374927571073311756373654273039671092598288533085100574270185100065065176710796577387685683;
	weights[38] 	= 2.2540365079384085983060690765163094174787327981175414191371842877364483527906992027033984263689329258223079e-8;

	nodes[39] 	= -4.2263747318887200455210975498196307974581757081502962555707798812423775506417833753672969020511947407131844177760930394420074069;
	weights[39] 	= 3.797142591145077727592849740382176766062381227148091675883614495815603686508941360874805800328131236805336e-9;

	nodes[40] 	= 4.2263747318887200455210975498196307974581757081502962555707798812423775506417833753672969020511947407131844177760930394420074069;
	weights[40] 	= 3.797142591145077727592849740382176766062381227148091675883614495815603686508941360874805800328131236805336e-9;

	nodes[41] 	= -4.4440980582138401516631821708543270217817287640137746868860317132682210900690709425747392181357742841607480860914700325075398021;
	weights[41] 	= 5.77537494424762387852515671329667017854054875287767356175294641095149029045023685077144353297304722874249e-10;

	nodes[42] 	= 4.4440980582138401516631821708543270217817287640137746868860317132682210900690709425747392181357742841607480860914700325075398021;
	weights[42] 	= 5.77537494424762387852515671329667017854054875287767356175294641095149029045023685077144353297304722874249e-10;

	nodes[43] 	= -4.662842775527280627314754105626843530202321179443696556329889205778083328412532051607578760217681037748239774201071929468356517;
	weights[43] 	= 7.9162851028857905085219036094608537603650554541333322509497281343577614747680097490977143810065889463471e-11;

	nodes[44] 	= 4.662842775527280627314754105626843530202321179443696556329889205778083328412532051607578760217681037748239774201071929468356517;
	weights[44] 	= 7.9162851028857905085219036094608537603650554541333322509497281343577614747680097490977143810065889463471e-11;

	nodes[45] 	= -4.8826800705576371326112280353075446903602250480883887582518615383272553087980522738742784836913476385352791331818238845370255469;
	weights[45] 	= 9.7589319582301624081328313024435474677443770941381836330586992611133611457287028432760198922033522583815e-12;

	nodes[46] 	= 4.8826800705576371326112280353075446903602250480883887582518615383272553087980522738742784836913476385352791331818238845370255469;
	weights[46] 	= 9.7589319582301624081328313024435474677443770941381836330586992611133611457287028432760198922033522583815e-12;

	nodes[47] 	= -5.103685223131635426434080494729148144051140316476511815636989134270896288517101899115224132859356278053294673329453223152915115;
	weights[47] 	= 1.0796165415752429987101690226690033462780980090854972653932154887204921625861617624090811282541951561476e-12;

	nodes[48] 	= 5.103685223131635426434080494729148144051140316476511815636989134270896288517101899115224132859356278053294673329453223152915115;
	weights[48] 	= 1.0796165415752429987101690226690033462780980090854972653932154887204921625861617624090811282541951561476e-12;

	nodes[49] 	= -5.3259380689199055948990111329392473003049610462822349653902485334024448397388134532382295812320579947980100206216238588881312096;
	weights[49] 	= 1.0692722214257190969931891468625942810242916063189397486383312107719503756580413629523906001760609863211e-13;

	nodes[50] 	= 5.3259380689199055948990111329392473003049610462822349653902485334024448397388134532382295812320579947980100206216238588881312096;
	weights[50] 	= 1.0692722214257190969931891468625942810242916063189397486383312107719503756580413629523906001760609863211e-13;

	nodes[51] 	= -5.5495235238436303936816914157851341084181149574491206441313978322291911885819834665533759003548214103392058610925274737479965596;
	weights[51] 	= 9.45658682752017102176169435437181576883793587241238981157826810792815248161956825880558257641813257759e-15;

	nodes[52] 	= 5.5495235238436303936816914157851341084181149574491206441313978322291911885819834665533759003548214103392058610925274737479965596;
	weights[52] 	= 9.45658682752017102176169435437181576883793587241238981157826810792815248161956825880558257641813257759e-15;

	nodes[53] 	= -5.7745321810917922305462243801232209070471209623011467620200460202667520506579651982653478829641431488976195234962626547044719363;
	weights[53] 	= 7.44707538171007646562369860634972699261059361715045633017290914043095250159882374241808898310785190952e-16;

	nodes[54] 	= 5.7745321810917922305462243801232209070471209623011467620200460202667520506579651982653478829641431488976195234962626547044719363;
	weights[54] 	= 7.44707538171007646562369860634972699261059361715045633017290914043095250159882374241808898310785190952e-16;

	nodes[55] 	= -6.0010609940399192502139900007898603192148716439208278957133624705508714233016845036374873088778040506518253828395977190579557286;
	weights[55] 	= 5.20609445171709986465219846438362246191687523170494818482976560230503365000673532357168156031237965461e-17;

	nodes[56] 	= 6.0010609940399192502139900007898603192148716439208278957133624705508714233016845036374873088778040506518253828395977190579557286;
	weights[56] 	= 5.20609445171709986465219846438362246191687523170494818482976560230503365000673532357168156031237965461e-17;

	nodes[57] 	= -6.2292140613060114063230630338652212676230913883807816816841298379736937218231930714218687028742960546188795891701034379633763746;
	weights[57] 	= 3.220055792871909925709729633798514670914322223913999398853006393762097223188835738593589272142056619e-18;

	nodes[58] 	= 6.2292140613060114063230630338652212676230913883807816816841298379736937218231930714218687028742960546188795891701034379633763746;
	weights[58] 	= 3.220055792871909925709729633798514670914322223913999398853006393762097223188835738593589272142056619e-18;

	nodes[59] 	= -6.4591035339104936590296712782377328392957697421453556117615212416227749276045574190245234406709809085880005127801630882127485371;
	weights[59] 	= 1.7557265568072470401959506434050442184047253640303777675772518375265407401904120233861541948738139975e-19;

	nodes[60] 	= 6.4591035339104936590296712782377328392957697421453556117615212416227749276045574190245234406709809085880005127801630882127485371;
	weights[60] 	= 1.7557265568072470401959506434050442184047253640303777675772518375265407401904120233861541948738139975e-19;

	nodes[61] 	= -6.6908506692717394753208964422266973238913673153851054828864562072648226321427725387904671171009334485814830751799682400629869836;
	weights[61] 	= 8.405449887239201243426627813896297224848452622754579205203164019111528156874664553023699858354456718e-21;

	nodes[62] 	= 6.6908506692717394753208964422266973238913673153851054828864562072648226321427725387904671171009334485814830751799682400629869836;
	weights[62] 	= 8.405449887239201243426627813896297224848452622754579205203164019111528156874664553023699858354456718e-21;

	nodes[63] 	= -6.9245870629045059080491989079417978114891544381985233893300063667869513572825393908976380355361329414102993724969397487751790253;
	weights[63] 	= 3.517850371933463252232092392406249361913674491935529737500598513582263847731437457889654954005474176e-22;

	nodes[64] 	= 6.9245870629045059080491989079417978114891544381985233893300063667869513572825393908976380355361329414102993724969397487751790253;
	weights[64] 	= 3.517850371933463252232092392406249361913674491935529737500598513582263847731437457889654954005474176e-22;

	nodes[65] 	= -7.1604560966616379354592833820143018744393959769866433750061396386533872640336684418454652698395092682750504510641510517594201592;
	weights[65] 	= 1.280913143206821850165472297273293019390543509279480358676515192793975072573932535388915326658268631e-23;

	nodes[66] 	= 7.1604560966616379354592833820143018744393959769866433750061396386533872640336684418454652698395092682750504510641510517594201592;
	weights[66] 	= 1.280913143206821850165472297273293019390543509279480358676515192793975072573932535388915326658268631e-23;

	nodes[67] 	= -7.3986146528207798919001256466095009367722416151412710790961642101964892791605014494252572184820530559631385515841782167995299054;
	weights[67] 	= 4.036344192692534117533417520087089623268745813328328941623314935483617461232166280277098463429548675e-25;

	nodes[68] 	= 7.3986146528207798919001256466095009367722416151412710790961642101964892791605014494252572184820530559631385515841782167995299054;
	weights[68] 	= 4.036344192692534117533417520087089623268745813328328941623314935483617461232166280277098463429548675e-25;

	nodes[69] 	= -7.6392351571886671158598401951480054857760501937157271538207156538511257143455991468878050472206555739689246283551611982557324285;
	weights[69] 	= 1.094308666226171424545067760546645424952487099715775383786496441262278789452875016677585785251988118e-26;

	nodes[70] 	= 7.6392351571886671158598401951480054857760501937157271538207156538511257143455991468878050472206555739689246283551611982557324285;
	weights[70] 	= 1.094308666226171424545067760546645424952487099715775383786496441262278789452875016677585785251988118e-26;

	nodes[71] 	= -7.8825080329965446789211906197327308376780522053546275813583179072952772716404002883845929761745614047867333640068160743378613512;
	weights[71] 	= 2.536017727980644527977980733833843327658720699096794737764203263415337503106843635131882190876242917e-28;

	nodes[72] 	= 7.8825080329965446789211906197327308376780522053546275813583179072952772716404002883845929761745614047867333640068160743378613512;
	weights[72] 	= 2.536017727980644527977980733833843327658720699096794737764203263415337503106843635131882190876242917e-28;

	nodes[73] 	= -8.1286446726129127284873508934892304115566071563965647507153500860080151706668969034833533296670575154371359390990961744820577126;
	weights[73] 	= 4.98747253618556923811687983012141921404161025771758010322039373943119128050750952030970335692040919e-30;

	nodes[74] 	= 8.1286446726129127284873508934892304115566071563965647507153500860080151706668969034833533296670575154371359390990961744820577126;
	weights[74] 	= 4.98747253618556923811687983012141921404161025771758010322039373943119128050750952030970335692040919e-30;

	nodes[75] 	= -8.3778810688446760220911366929681633875098234025306764776253775284997308622920582570322551556630523549822720502539441814510637125;
	weights[75] 	= 8.25665174309457653935677072487157010579321174111412199145489028970031558913574638971713439006643335e-32;

	nodes[76] 	= 8.3778810688446760220911366929681633875098234025306764776253775284997308622920582570322551556630523549822720502539441814510637125;
	weights[76] 	= 8.25665174309457653935677072487157010579321174111412199145489028970031558913574638971713439006643335e-32;

	nodes[77] 	= -8.6304822961073285304545211430197824912157155681524129620801205257108488810798021559449394860055498154604179449753294703666146676;
	weights[77] 	= 1.140148700666005355005009240962717296792260339063894323122629684206343374628949788483061783799866203e-33;

	nodes[78] 	= 8.6304822961073285304545211430197824912157155681524129620801205257108488810798021559449394860055498154604179449753294703666146676;
	weights[78] 	= 1.140148700666005355005009240962717296792260339063894323122629684206343374628949788483061783799866203e-33;

	nodes[79] 	= -8.8867481005681864386620738327160027501370203026491998707953058314762856641481241881915195932394117399425957345079466726704509016;
	weights[79] 	= 1.299782240757570610815387889260600723993417627379450050671910584738102354077281892034881603703400389e-35;

	nodes[80] 	= 8.8867481005681864386620738327160027501370203026491998707953058314762856641481241881915195932394117399425957345079466726704509016;
	weights[80] 	= 1.299782240757570610815387889260600723993417627379450050671910584738102354077281892034881603703400389e-35;

	nodes[81] 	= -9.1470199577543803915975307405477446147096230313873492069722193965326154937330070390839699844325064312368999028134159764604879633;
	weights[81] 	= 1.208998596391558141989953033584774857176975048748670859761197587303560900283108090934789354510319984e-37;

	nodes[82] 	= 9.1470199577543803915975307405477446147096230313873492069722193965326154937330070390839699844325064312368999028134159764604879633;
	weights[82] 	= 1.208998596391558141989953033584774857176975048748670859761197587303560900283108090934789354510319984e-37;

	nodes[83] 	= -9.4116901024866959600579582364335688312377076390758091238198367627139002585652253097656136887902741554549127579183522554615875773;
	weights[83] 	= 9.05251416990237649038679601163293249847284231616442493312805378173524444501495485161940354130128915e-40;

	nodes[84] 	= 9.4116901024866959600579582364335688312377076390758091238198367627139002585652253097656136887902741554549127579183522554615875773;
	weights[84] 	= 9.05251416990237649038679601163293249847284231616442493312805378173524444501495485161940354130128915e-40;

	nodes[85] 	= -9.6812132563270604091607420107313198939079799215710886279117040033132874316033281183644718455044038600750956042744112368419983934;
	weights[85] 	= 5.37184215758240823157872807980581245060560385367186723989615851871080905334879513115737893734413276e-42;

	nodes[86] 	= 9.6812132563270604091607420107313198939079799215710886279117040033132874316033281183644718455044038600750956042744112368419983934;
	weights[86] 	= 5.37184215758240823157872807980581245060560385367186723989615851871080905334879513115737893734413276e-42;

	nodes[87] 	= -9.9561221176215076935445597984293572679374564080635924870099366617121567164769301598678362065082374511228578217644774804041865589;
	weights[87] 	= 2.480679211314109761345697599877770113971021892509964780981857628136323923027380551923696779764289497e-44;

	nodes[88] 	= 9.9561221176215076935445597984293572679374564080635924870099366617121567164769301598678362065082374511228578217644774804041865589;
	weights[88] 	= 2.480679211314109761345697599877770113971021892509964780981857628136323923027380551923696779764289497e-44;

	nodes[89] 	= -10.237048218321810984097090643693945382429845929669456226628978972414213058649229986014052963408911517217716252639659473373224181;
	weights[89] 	= 8.724885112254297691165884936896667059746695926878044921594742457939708985948333981407344083097288109e-47;

	nodes[90] 	= 10.237048218321810984097090643693945382429845929669456226628978972414213058649229986014052963408911517217716252639659473373224181;
	weights[90] 	= 8.724885112254297691165884936896667059746695926878044921594742457939708985948333981407344083097288109e-47;

	nodes[91] 	= -10.524750634313889073403174354907214608276234483286507518657097976854503729779441270275975261583969862442386752551214368060274057;
	weights[91] 	= 2.277725001942326765598686405039733776170893408542717293336877783131502803766613940958074684583742291e-49;

	nodes[92] 	= 10.524750634313889073403174354907214608276234483286507518657097976854503729779441270275975261583969862442386752551214368060274057;
	weights[92] 	= 2.277725001942326765598686405039733776170893408542717293336877783131502803766613940958074684583742291e-49;

	nodes[93] 	= -10.82015653436744749289281202832816771721312249435340683419580783648326285198300029881139600551497826678447610946897950557463129;
	weights[93] 	= 4.2776169290545953809952460682740939420159057898129751311553946828502694883184085215191622151084356987e-52;

	nodes[94] 	= 10.82015653436744749289281202832816771721312249435340683419580783648326285198300029881139600551497826678447610946897950557463129;
	weights[94] 	= 4.2776169290545953809952460682740939420159057898129751311553946828502694883184085215191622151084356987e-52;

	nodes[95] 	= -11.12442020706031269122335840929634618448076742668582951995848750082883579263645361567606035069783797266608360078067064237477091;
	weights[95] 	= 5.5596107723276768917773868844782904918545041228693857379963857093482939739645238440321555635539229364e-55;

	nodes[96] 	= 11.12442020706031269122335840929634618448076742668582951995848750082883579263645361567606035069783797266608360078067064237477091;
	weights[96] 	= 5.5596107723276768917773868844782904918545041228693857379963857093482939739645238440321555635539229364e-55;

	nodes[97] 	= -11.43901214840169566221771175796655627291639959036103344397863736901804708971359862113313427226147142547495872490273840307126026;
	weights[97] 	= 4.7616681817654568175183594641397498440168259089865403895441456463399619789477852282567629703397857859e-58;

	nodes[98] 	= 11.43901214840169566221771175796655627291639959036103344397863736901804708971359862113313427226147142547495872490273840307126026;
	weights[98] 	= 4.7616681817654568175183594641397498440168259089865403895441456463399619789477852282567629703397857859e-58;

	nodes[99] 	= -11.765859570925669336159565677536073947182270227181899168905583003425465942114490083402038866669111147680072100713673507022653097;
	weights[99] 	= 2.52173561807127916994088320327726259462143097394664995723518667686394118366574242971980516903454810115e-61;

	nodes[100] 	= 11.765859570925669336159565677536073947182270227181899168905583003425465942114490083402038866669111147680072100713673507022653097;
	weights[100] 	= 2.52173561807127916994088320327726259462143097394664995723518667686394118366574242971980516903454810115e-61;

	nodes[101] 	= -12.10758051855092323242372334382087090457773166741410342518933447569901857373194062199852357473325090657020652997793232879604672;
	weights[101] 	= 7.579850975720781648488693022661240539908947172274677576051909223998642578951519466382788305720656678063e-65;

	nodes[102] 	= 12.10758051855092323242372334382087090457773166741410342518933447569901857373194062199852357473325090657020652997793232879604672;
	weights[102] 	= 7.579850975720781648488693022661240539908947172274677576051909223998642578951519466382788305720656678063e-65;

	nodes[103] 	= -12.467902444132251609994100261264711443053010836604579967496146872291806381725883352289733225528965314119004399284393411910944568;
	weights[103] 	= 1.146145818206694125321012529870920566363723507170203752801013770549424201947371820279351630415347641535e-68;

	nodes[104] 	= 12.467902444132251609994100261264711443053010836604579967496146872291806381725883352289733225528965314119004399284393411910944568;
	weights[104] 	= 1.146145818206694125321012529870920566363723507170203752801013770549424201947371820279351630415347641535e-68;

	nodes[105] 	= -12.852484601295865594760998511664034479867724001645645706451269058236494861243030676989204391047098039114184431873748826765535564;
	weights[105] 	= 7.2755698062212703242671154155533884069394204208016677117878138634776749311732565735372746850907564483539e-73;

	nodes[106] 	= 12.852484601295865594760998511664034479867724001645645706451269058236494861243030676989204391047098039114184431873748826765535564;
	weights[106] 	= 7.2755698062212703242671154155533884069394204208016677117878138634776749311732565735372746850907564483539e-73;

	nodes[107] 	= -13.270764846437274638187131578067295162626706363585545420674631192001951422124161874160111861091452047896060101191389715241334275;
	weights[107] 	= 1.440322579524682421768392835497162854083839079146205068709050961720589878178908922037723270530896182614926e-77;

	nodes[108] 	= 13.270764846437274638187131578067295162626706363585545420674631192001951422124161874160111861091452047896060101191389715241334275;
	weights[108] 	= 1.440322579524682421768392835497162854083839079146205068709050961720589878178908922037723270530896182614926e-77;

	nodes[109] 	= -13.741064189376445511047085847612641592684429440551383134159493813983925051712488537511358801715494159502110138359965129315799262;
	weights[109] 	= 5.0483520825701630855958204748275616018297149701112396565078013505660727220395236840602280768892598415994343e-83;

	nodes[110] 	= 13.741064189376445511047085847612641592684429440551383134159493813983925051712488537511358801715494159502110138359965129315799262;
	weights[110] 	= 5.0483520825701630855958204748275616018297149701112396565078013505660727220395236840602280768892598415994343e-83;

	nodes[111] 	= -14.311358299517270901509746916566688916057875651736791809843297197486755651335542905400507742121789978954029516275471789736804038;
	weights[111] 	= 7.407780149742723642078909453456999875272860615920279668307229467599994926411847794591663367198563679972412422e-90;

	nodes[112] 	= 14.311358299517270901509746916566688916057875651736791809843297197486755651335542905400507742121789978954029516275471789736804038;
	weights[112] 	= 7.407780149742723642078909453456999875272860615920279668307229467599994926411847794591663367198563679972412422e-90;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_113_hpp__)*/