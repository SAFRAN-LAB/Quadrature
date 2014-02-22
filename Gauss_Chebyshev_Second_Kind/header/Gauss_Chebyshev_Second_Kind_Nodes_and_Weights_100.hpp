//
//        Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_100.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.01:14:57.
//
//
//        Array of nodes and weights for Gauss Chebyshev_Second_Kind quadrature of order 100.
//
//

#ifndef __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_100_hpp__
#define __Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_100_hpp__

void Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_100(long double*& nodes, long double*& weights) {
	nodes	= new long double[100];
	weights	= new long double[100];

	nodes[0] 	= 0.99951628229198806492074553906427644263542228213753449962770323229349876175474541365213988195119601942720379317605295164584067231;
	weights[0] 	= 0.000030084682347440760194361208686796218631898686477511263369841437248660694287335643466966397288464324097179446250785422692011058156;

	nodes[1] 	= 0.99806559713359434832234688360676841910017673936548005607933199767659457336253774999271724761999321517498962541662588884070268139;
	weights[1] 	= 0.00012022233759822745494514265178842439754396416643040625185345024246671342139851545611004563890847666816719361486330552416498095453;

	nodes[2] 	= 0.9956493479690185804839978689340994056220958738412893084003130034086181486221682250070442195618960994496448439105832049287589246;
	weights[2] 	= 0.00027006424067498367180803877202916035164858149140840480886368473874309331126667303303857798805915714642671673645470472036740596267;

	nodes[3] 	= 0.99226987236327651009237126311966043698878388880999145930629122125377810576562664120670104829011879467339159643462223071661848414;
	weights[3] 	= 0.0004790306823640707006565521181961300471956202016089822437834483324318076773251592078514654057539132479585150592702727295409853322;

	nodes[4] 	= 0.98793043974075672074794347682974155235775222686299786237010477326637430377274918066878506705825113872217760691230239962800040699;
	weights[4] 	= 0.0007463132120979166226563379519468966899935308898803365205363686148611741459669740467470942614987225708415664387532970993099657851;

	nodes[5] 	= 0.98263524822226368743703170726095514814160789497046510039132413542884082362046436323886209676042200647984035699322079171143360449;
	weights[5] 	= 0.0010708777656932068270567708698176481019063847976069245447928419876532897707031407015861691570535754533234407706444018084433691575;

	nodes[6] 	= 0.97638942056360702953607107972583759244672722111686494848107577848399733040904676389516506668854756927089402876965915635551686217;
	weights[6] 	= 0.001451468665944324513595517696749781069708388683981080565038666329597380235415412979584649281415037975690594867123984856693942112;

	nodes[7] 	= 0.96919899919966611294379541129868057035597134337869419248405497643364165709652902544762667138769643598225106338305777444147023258;
	weights[7] 	= 0.0018866134805945223432531179982456885987254863086229966200872814929933775264004921091087269940018898460222158525673152887003639979;

	nodes[8] 	= 0.96107094039872454876474527470103433915699511298687017542719261263118090213488058072863051496071938740990556271280763002901442838;
	weights[8] 	= 0.0023746287188902785186430886764018581379567342886927177353830887523960545486266440480885170544111109591731848831697334764619668269;

	nodes[9] 	= 0.95201310753272989238030586831286502799536286230522778546967237194604921896037439223760960668979141166776120461399583984017477128;
	weights[9] 	= 0.0029136263446799751439625366975897115265314608838576468094673611310421852944990172685177476544242086705799772842274051808882467192;

	nodes[10] 	= 0.94203426346998913201503650794174703796676037568714021587259092624839806234173714731454445569590401188872329907184942889987478829;
	weights[10] 	= 0.00350152108085898535929857985083240468632680242119548535778921524448889431442710075143492419396534463200943699846367903038662079;

	nodes[11] 	= 0.9311440620976595426031308376991413035929141277454339752785263556709150913251202951903356204252477194239446553806757171462951874;
	weights[11] 	= 0.004136038476901690221180010594560984403719398711700601069105393106751141342846186960113058152794475513361008714582202956618057934;

	nodes[12] 	= 0.91935303898223634754264362532828191820052105894390671118536387841546636129124242197851817418139792954628283673872021196525099369;
	weights[12] 	= 0.004814723708268711212827988161001783802967907337420729729716630273696119212003986854826788673615214666629349570457241620006787401;

	nodes[13] 	= 0.9066726011770725633418950099340847004961757343965318050318767699396633421619780219161562781329833485172697364602719004651402441;
	weights[13] 	= 0.005534951073646161237628855679383136958839289047720480420032604222700842260343285027986564617408883245438102295035922452392661397;

	nodes[14] 	= 0.89311501618679159343746174876567828213937345408540345914241149120760355019328198891792763681547196227250913892437560071719507076;
	weights[14] 	= 0.006293934153273940435705005918011905141592245604466335934841556809781592512051735908722217089598274721437226799160919374574090453;

	nodes[15] 	= 0.87869340009926878927712293688206692621031923632983102239973460621250380387035086744805583662465816437579369361680461505462318897;
	weights[15] 	= 0.007088736589062478076949368828554437008191278209070119864634575113173904266742115181479748778342720478083780958259829121413567277;

	nodes[16] 	= 0.86342170489666352002359288217943866427171122648948446754713947457266790501250782467687350667560202186378524214617569843684447576;
	weights[16] 	= 0.00791628344479174307911263965294625283800166775635410952960913504706053628946648699444082411402307073683808321321523909188601729;

	nodes[17] 	= 0.8473147049577775078476008516452246303544620816613173625897015018033616031437017835051107619475234811783254437244825248283034347;
	weights[17] 	= 0.008773373102442120093173575860974579263675216637817220712152759254389681168050038339541508144780500230082165135892697969153105273;

	nodes[18] 	= 0.83038798276479752538955455159870430380017068267929609675982152357408522871949632983164980833101740505347007197294059605674044313;
	weights[18] 	= 0.009656689648632558063173167436797876399442635585329124044593861877265908968589634915078976825796290188722563053312061736956668083;

	nodes[19] 	= 0.81265791382825025871460473768251847839640986178704335444780061788919765190259796615886512818081116098371085122441064756377622966;
	weights[19] 	= 0.010562815703245268342251767701208691188744528976265113680638468628388875821679410188496104901682561749752801805136420096862171141;

	nodes[20] 	= 0.79414165084475346832484664240176635514321928260027589874758682252561386314822834106801226011034141836653410460125132372125213824;
	weights[20] 	= 0.011488245640605515588733184355243883979624100789879226289333858481446305067171425230030974618735652974960750635599120207245174899;

	nodes[21] 	= 0.77485710710288980082495805513248410063766389692459246612180091458029749413168281316899154304838452038843430332006574543980061654;
	weights[21] 	= 0.012429399152066325272708011671897749014210526062735466770619661072187401552091377710518626195497146840685155391266166189060407669;

	nodes[22] 	= 0.75482293915325699661383790679309902006945621388361716450397048425824816974128885841140338396796244551097645995666946826837733162;
	weights[22] 	= 0.013382635097527102324975820332793976140227044303995676870368088389596484109700646313533934570020166899744358553803580987481848192;

	nodes[23] 	= 0.73405852875946010078923998105347012358855653008028482486507149256576398670449518832395765258379003608716761004772312349803243031;
	weights[23] 	= 0.014344265592297326288374671738643063606099837549826246124734592450619733885022180282552737886950386211462717813274182289610154552;

	nodes[24] 	= 0.71258396414750692662466330070763841591363768412260046916581616731547642476043983284434345178963479675676964386955008823876952139;
	weights[24] 	= 0.015310570274805983950365072779482277883940547608164543091776764736545164541818492675867219509577639208681720235358278552320982471;

	nodes[25] 	= 0.69042002057174677051898949085538490292254355158880291047462480753233796203809659793977959417580263514776618380083978432677386063;
	weights[25] 	= 0.01627781069995774340981352187528262515999775061573333165987134671760460905419501701880831393859161515292990172649288735510887044;

	nodes[26] 	= 0.66758814021615357758320320517444387560421121223413521604522510356511467524094293844615182522784883898013859372871469278780185771;
	weights[26] 	= 0.017242244802450770697351106195059585283813203433165436411796838445182319409212622798377156217183272139578669127383274529169914659;

	nodes[27] 	= 0.6441104114503977683464421890803684967902343261729912162185486598731316201602005807214555780553179680634658473259546752690195194;
	weights[27] 	= 0.018200141374100422064894443572186319500924735160701191430405500569764293199348070481015822528519645060311824479068005111394254164;

	nodes[28] 	= 0.62000954746077513736367689317507301654021773403211602463831024420334758841318328792912183124194442116111136670179948769799225187;
	weights[28] 	= 0.019147794499158859047834365004884442026126572360566309115050193907830150613194225704817334783661049710542256092186620601518681034;

	nodes[29] 	= 0.59530886427666601991603877775079896291180903015336041316965664859333395107447840432734840648323196554294454767621293880742601905;
	weights[29] 	= 0.020081537891783139018176285391951098306448857614872997906140886342955353359483122486712692035861016671436357578771220000208181987;

	nodes[30] 	= 0.57003225821378270842137807479159406925791164798725843552844071379452620512401294792580438929249925038452868131291362483685121323;
	weights[30] 	= 0.020997759080182902485901142018357554603524338477315177807141633668949274990932996576131481592598387908264004847059502288849153826;

	nodes[31] 	= 0.54420418275602731987490336755664682122439722204393806848274456729936254326965509794460139256896911611927129776318238487306702426;
	weights[31] 	= 0.02189291338257194526087320536963857957716822838031761161206674232437767290557634834036559900458431656550606576178657992897475028;

	nodes[32] 	= 0.51784962489832542377161451345563233212027211680352679667332731710554088306364884340951871466308305163668405720804317013201386904;
	weights[32] 	= 0.022763537620853433911421625300445961639088983153210488129125719990565386880214327774643788671516260603346750540430325310567072345;

	nodes[33] 	= 0.49099408097332221110164568241676896820481553018487151626864586855916428147579614424854105672291496348341492050493451935463757267;
	weights[33] 	= 0.023606263518983180540059938433944814482487013744970584119243030311396078311549545099037364224975883713194068326627585246017121064;

	nodes[34] 	= 0.46366353198532731466693791534732982855443750545401410242528377049221482989612743935781164084465426718410309864437187585034946872;
	weights[34] 	= 0.024417830734175312228602805066964323718796460651868228986564565108356036120439920908433102759609482114263868912507062416259042702;

	nodes[35] 	= 0.435884418475371096073665879965207904645416602291324858860481868788961508431729390621054387057002919950910137280579973765188555;
	weights[35] 	= 0.025195099470535131953287549806448724852511192791921552499770010919443658037177354709499623332867727154900462311396230205843217852;

	nodes[36] 	= 0.4076836149416888341281488653246997990081017726934898537430471184782305046765979996010432591045992812196941552830166042242956035;
	weights[36] 	= 0.025935062626319475846015042292656145707796555661426234964162516375343090571850960648749690624308032304756900965827780027157323173;

	nodes[37] 	= 0.3790884038403793441571343816078244405535555341379018343496698515753691395503362790240534792514088270298049780651226229165476332;
	weights[37] 	= 0.026634857427829176293586148382706240594839530313196490564108707944238438373390291262131466115385412105237352225341892308335107433;

	nodes[38] 	= 0.3501264491913907118974188693794591010878039288523635745107386164810974597252986685761414225838487181273808331731401208201182257;
	weights[38] 	= 0.027291776504924361018785211336730065407608326760519848205365152633587998154332084208203817920962689932146976767778819502079732637;

	nodes[39] 	= 0.32082576981536764612687997710157105538584096941288607859981721862133560904550013396766126701065645983963679302227816712033349;
	weights[39] 	= 0.02790327836531357106038637017794870550035773362602968975927491306198107015043778834739818030443798848131709352690694355202648797;

	nodes[40] 	= 0.2912147122272520717524381461965296459483599590589343426086737283121867997312260196176208769521464029867898190129246276582172648;
	weights[40] 	= 0.028466997227093707865318616614948226615554384636714714635008258262580596627650635113305933100142531234821974533964932892528169502;

	nodes[41] 	= 0.2613219232128606541420826388693101439109311830752162070610358842698853645239612610607551928101714347310682945682159649837046712;
	weights[41] 	= 0.028980752171500622577583272971381503143688775132116849347290375843845941673507793909273316984227952893474592864292413310259776766;

	nodes[42] 	= 0.231176322114969644832508206407591729921468079781289729941093309507457253630082912618757777587929226925243511086984429602807611;
	weights[42] 	= 0.029442555580460133573090892117036311657828791330750068902377215084753921082709311192529138127065921801790607518429308025743312856;

	nodes[43] 	= 0.2008070728557184716493054702128116063393810455644414590566943473357596698102336552651823867153514046441912549445238794154447758;
	weights[43] 	= 0.029850620826296226492890956441037731312449305437823076038839906070482484297792694830557797100879403957136037873447701394442103013;

	nodes[44] 	= 0.1702435557223985908618450253519057389525877944926838698356149191068249818256379523579437922948621296949061534903670499289747891;
	weights[44] 	= 0.030203369183846449606859728153311880010031286096105710334055830361190315357782360443025560645779883204160592183014511804320503004;

	nodes[45] 	= 0.1395153389439230284724561215228881162451350429995989711986405721982160323870757970431543392189789386550229193389197878377320847;
	weights[45] 	= 0.030499435938242872840409946721883497748959493124404637690255077271119382381479884788922958994688698776741006737450530863383734509;

	nodes[46] 	= 0.1086521500854745406540899698581828558584372747880115878549716217600915955974064328273248721932193377981029089779341154846301361;
	weights[46] 	= 0.030737675664728792475184118641928084657341355780701970531334816006488587466908516955183397111152742162194590373811327713504955668;

	nodes[47] 	= 0.0776838472890062237938838443050377738388411334789601655125913369775000636280018368401935077196642608077980254611865332589512044;
	weights[47] 	= 0.030917166660084596388392472984820578126604079680115396663249249933747690585253437669973028385358091919986307666973015977367350373;

	nodes[48] 	= 0.0466403903874175323995867221775532920853340859971760083260513809791801312984303791182879461125761647747729194244979356194155784;
	weights[48] 	= 0.031037214508518464038829341819607747663595550294172472938471747803223437958802500311595601516361361215784582621282724169979437635;

	nodes[49] 	= 0.0155518119203508740101554467387995558316804387530937156435294189620768226838844439417956964062621074641573904397374620597064107;
	weights[49] 	= 0.031097354768226162816883553924929876296304768584548898139642715350419992070436970249592372209207015051544369939946634343503653532;

	nodes[50] 	= -0.0155518119203508740101554467387995558316804387530937156435294189620768226838844439417956964062621074641573904397374620597064107;
	weights[50] 	= 0.031097354768226162816883553924929876296304768584548898139642715350419992070436970249592372209207015051544369939946634343503653532;

	nodes[51] 	= -0.0466403903874175323995867221775532920853340859971760083260513809791801312984303791182879461125761647747729194244979356194155784;
	weights[51] 	= 0.031037214508518464038829341819607747663595550294172472938471747803223437958802500311595601516361361215784582621282724169979437635;

	nodes[52] 	= -0.0776838472890062237938838443050377738388411334789601655125913369775000636280018368401935077196642608077980254611865332589512044;
	weights[52] 	= 0.030917166660084596388392472984820578126604079680115396663249249933747690585253437669973028385358091919986307666973015977367350373;

	nodes[53] 	= -0.1086521500854745406540899698581828558584372747880115878549716217600915955974064328273248721932193377981029089779341154846301361;
	weights[53] 	= 0.030737675664728792475184118641928084657341355780701970531334816006488587466908516955183397111152742162194590373811327713504955668;

	nodes[54] 	= -0.1395153389439230284724561215228881162451350429995989711986405721982160323870757970431543392189789386550229193389197878377320847;
	weights[54] 	= 0.030499435938242872840409946721883497748959493124404637690255077271119382381479884788922958994688698776741006737450530863383734509;

	nodes[55] 	= -0.1702435557223985908618450253519057389525877944926838698356149191068249818256379523579437922948621296949061534903670499289747891;
	weights[55] 	= 0.030203369183846449606859728153311880010031286096105710334055830361190315357782360443025560645779883204160592183014511804320503004;

	nodes[56] 	= -0.2008070728557184716493054702128116063393810455644414590566943473357596698102336552651823867153514046441912549445238794154447758;
	weights[56] 	= 0.029850620826296226492890956441037731312449305437823076038839906070482484297792694830557797100879403957136037873447701394442103013;

	nodes[57] 	= -0.231176322114969644832508206407591729921468079781289729941093309507457253630082912618757777587929226925243511086984429602807611;
	weights[57] 	= 0.029442555580460133573090892117036311657828791330750068902377215084753921082709311192529138127065921801790607518429308025743312856;

	nodes[58] 	= -0.2613219232128606541420826388693101439109311830752162070610358842698853645239612610607551928101714347310682945682159649837046712;
	weights[58] 	= 0.028980752171500622577583272971381503143688775132116849347290375843845941673507793909273316984227952893474592864292413310259776766;

	nodes[59] 	= -0.2912147122272520717524381461965296459483599590589343426086737283121867997312260196176208769521464029867898190129246276582172648;
	weights[59] 	= 0.028466997227093707865318616614948226615554384636714714635008258262580596627650635113305933100142531234821974533964932892528169502;

	nodes[60] 	= -0.32082576981536764612687997710157105538584096941288607859981721862133560904550013396766126701065645983963679302227816712033349;
	weights[60] 	= 0.02790327836531357106038637017794870550035773362602968975927491306198107015043778834739818030443798848131709352690694355202648797;

	nodes[61] 	= -0.3501264491913907118974188693794591010878039288523635745107386164810974597252986685761414225838487181273808331731401208201182257;
	weights[61] 	= 0.027291776504924361018785211336730065407608326760519848205365152633587998154332084208203817920962689932146976767778819502079732637;

	nodes[62] 	= -0.3790884038403793441571343816078244405535555341379018343496698515753691395503362790240534792514088270298049780651226229165476332;
	weights[62] 	= 0.026634857427829176293586148382706240594839530313196490564108707944238438373390291262131466115385412105237352225341892308335107433;

	nodes[63] 	= -0.4076836149416888341281488653246997990081017726934898537430471184782305046765979996010432591045992812196941552830166042242956035;
	weights[63] 	= 0.025935062626319475846015042292656145707796555661426234964162516375343090571850960648749690624308032304756900965827780027157323173;

	nodes[64] 	= -0.435884418475371096073665879965207904645416602291324858860481868788961508431729390621054387057002919950910137280579973765188555;
	weights[64] 	= 0.025195099470535131953287549806448724852511192791921552499770010919443658037177354709499623332867727154900462311396230205843217852;

	nodes[65] 	= -0.4636635319853273146669379153473298285544375054540141024252837704922148298961274393578116408446542671841030986443718758503494687;
	weights[65] 	= 0.024417830734175312228602805066964323718796460651868228986564565108356036120439920908433102759609482114263868912507062416259042702;

	nodes[66] 	= -0.4909940809733222111016456824167689682048155301848715162686458685591642814757961442485410567229149634834149205049345193546375727;
	weights[66] 	= 0.023606263518983180540059938433944814482487013744970584119243030311396078311549545099037364224975883713194068326627585246017121064;

	nodes[67] 	= -0.517849624898325423771614513455632332120272116803526796673327317105540883063648843409518714663083051636684057208043170132013869;
	weights[67] 	= 0.022763537620853433911421625300445961639088983153210488129125719990565386880214327774643788671516260603346750540430325310567072345;

	nodes[68] 	= -0.5442041827560273198749033675566468212243972220439380684827445672993625432696550979446013925689691161192712977631823848730670243;
	weights[68] 	= 0.02189291338257194526087320536963857957716822838031761161206674232437767290557634834036559900458431656550606576178657992897475028;

	nodes[69] 	= -0.5700322582137827084213780747915940692579116479872584355284407137945262051240129479258043892924992503845286813129136248368512132;
	weights[69] 	= 0.020997759080182902485901142018357554603524338477315177807141633668949274990932996576131481592598387908264004847059502288849153826;

	nodes[70] 	= -0.595308864276666019916038777750798962911809030153360413169656648593333951074478404327348406483231965542944547676212938807426019;
	weights[70] 	= 0.020081537891783139018176285391951098306448857614872997906140886342955353359483122486712692035861016671436357578771220000208181987;

	nodes[71] 	= -0.6200095474607751373636768931750730165402177340321160246383102442033475884131832879291218312419444211611113667017994876979922519;
	weights[71] 	= 0.019147794499158859047834365004884442026126572360566309115050193907830150613194225704817334783661049710542256092186620601518681034;

	nodes[72] 	= -0.6441104114503977683464421890803684967902343261729912162185486598731316201602005807214555780553179680634658473259546752690195194;
	weights[72] 	= 0.018200141374100422064894443572186319500924735160701191430405500569764293199348070481015822528519645060311824479068005111394254164;

	nodes[73] 	= -0.6675881402161535775832032051744438756042112122341352160452251035651146752409429384461518252278488389801385937287146927878018577;
	weights[73] 	= 0.017242244802450770697351106195059585283813203433165436411796838445182319409212622798377156217183272139578669127383274529169914659;

	nodes[74] 	= -0.6904200205717467705189894908553849029225435515888029104746248075323379620380965979397795941758026351477661838008397843267738606;
	weights[74] 	= 0.01627781069995774340981352187528262515999775061573333165987134671760460905419501701880831393859161515292990172649288735510887044;

	nodes[75] 	= -0.7125839641475069266246633007076384159136376841226004691658161673154764247604398328443434517896347967567696438695500882387695214;
	weights[75] 	= 0.015310570274805983950365072779482277883940547608164543091776764736545164541818492675867219509577639208681720235358278552320982471;

	nodes[76] 	= -0.7340585287594601007892399810534701235885565300802848248650714925657639867044951883239576525837900360871676100477231234980324303;
	weights[76] 	= 0.014344265592297326288374671738643063606099837549826246124734592450619733885022180282552737886950386211462717813274182289610154552;

	nodes[77] 	= -0.7548229391532569966138379067930990200694562138836171645039704842582481697412888584114033839679624455109764599566694682683773316;
	weights[77] 	= 0.013382635097527102324975820332793976140227044303995676870368088389596484109700646313533934570020166899744358553803580987481848192;

	nodes[78] 	= -0.7748571071028898008249580551324841006376638969245924661218009145802974941316828131689915430483845203884343033200657454398006165;
	weights[78] 	= 0.012429399152066325272708011671897749014210526062735466770619661072187401552091377710518626195497146840685155391266166189060407669;

	nodes[79] 	= -0.7941416508447534683248466424017663551432192826002758987475868225256138631482283410680122601103414183665341046012513237212521382;
	weights[79] 	= 0.011488245640605515588733184355243883979624100789879226289333858481446305067171425230030974618735652974960750635599120207245174899;

	nodes[80] 	= -0.8126579138282502587146047376825184783964098617870433544478006178891976519025979661588651281808111609837108512244106475637762297;
	weights[80] 	= 0.010562815703245268342251767701208691188744528976265113680638468628388875821679410188496104901682561749752801805136420096862171141;

	nodes[81] 	= -0.8303879827647975253895545515987043038001706826792960967598215235740852287194963298316498083310174050534700719729405960567404431;
	weights[81] 	= 0.009656689648632558063173167436797876399442635585329124044593861877265908968589634915078976825796290188722563053312061736956668083;

	nodes[82] 	= -0.8473147049577775078476008516452246303544620816613173625897015018033616031437017835051107619475234811783254437244825248283034347;
	weights[82] 	= 0.008773373102442120093173575860974579263675216637817220712152759254389681168050038339541508144780500230082165135892697969153105273;

	nodes[83] 	= -0.8634217048966635200235928821794386642717112264894844675471394745726679050125078246768735066756020218637852421461756984368444758;
	weights[83] 	= 0.00791628344479174307911263965294625283800166775635410952960913504706053628946648699444082411402307073683808321321523909188601729;

	nodes[84] 	= -0.878693400099268789277122936882066926210319236329831022399734606212503803870350867448055836624658164375793693616804615054623189;
	weights[84] 	= 0.007088736589062478076949368828554437008191278209070119864634575113173904266742115181479748778342720478083780958259829121413567277;

	nodes[85] 	= -0.8931150161867915934374617487656782821393734540854034591424114912076035501932819889179276368154719622725091389243756007171950708;
	weights[85] 	= 0.006293934153273940435705005918011905141592245604466335934841556809781592512051735908722217089598274721437226799160919374574090453;

	nodes[86] 	= -0.9066726011770725633418950099340847004961757343965318050318767699396633421619780219161562781329833485172697364602719004651402441;
	weights[86] 	= 0.005534951073646161237628855679383136958839289047720480420032604222700842260343285027986564617408883245438102295035922452392661397;

	nodes[87] 	= -0.9193530389822363475426436253282819182005210589439067111853638784154663612912424219785181741813979295462828367387202119652509937;
	weights[87] 	= 0.004814723708268711212827988161001783802967907337420729729716630273696119212003986854826788673615214666629349570457241620006787401;

	nodes[88] 	= -0.9311440620976595426031308376991413035929141277454339752785263556709150913251202951903356204252477194239446553806757171462951874;
	weights[88] 	= 0.004136038476901690221180010594560984403719398711700601069105393106751141342846186960113058152794475513361008714582202956618057934;

	nodes[89] 	= -0.94203426346998913201503650794174703796676037568714021587259092624839806234173714731454445569590401188872329907184942889987478829;
	weights[89] 	= 0.00350152108085898535929857985083240468632680242119548535778921524448889431442710075143492419396534463200943699846367903038662079;

	nodes[90] 	= -0.95201310753272989238030586831286502799536286230522778546967237194604921896037439223760960668979141166776120461399583984017477128;
	weights[90] 	= 0.002913626344679975143962536697589711526531460883857646809467361131042185294499017268517747654424208670579977284227405180888246719;

	nodes[91] 	= -0.96107094039872454876474527470103433915699511298687017542719261263118090213488058072863051496071938740990556271280763002901442838;
	weights[91] 	= 0.002374628718890278518643088676401858137956734288692717735383088752396054548626644048088517054411110959173184883169733476461966827;

	nodes[92] 	= -0.96919899919966611294379541129868057035597134337869419248405497643364165709652902544762667138769643598225106338305777444147023258;
	weights[92] 	= 0.001886613480594522343253117998245688598725486308622996620087281492993377526400492109108726994001889846022215852567315288700363998;

	nodes[93] 	= -0.97638942056360702953607107972583759244672722111686494848107577848399733040904676389516506668854756927089402876965915635551686217;
	weights[93] 	= 0.001451468665944324513595517696749781069708388683981080565038666329597380235415412979584649281415037975690594867123984856693942112;

	nodes[94] 	= -0.98263524822226368743703170726095514814160789497046510039132413542884082362046436323886209676042200647984035699322079171143360449;
	weights[94] 	= 0.001070877765693206827056770869817648101906384797606924544792841987653289770703140701586169157053575453323440770644401808443369157;

	nodes[95] 	= -0.98793043974075672074794347682974155235775222686299786237010477326637430377274918066878506705825113872217760691230239962800040699;
	weights[95] 	= 0.000746313212097916622656337951946896689993530889880336520536368614861174145966974046747094261498722570841566438753297099309965785;

	nodes[96] 	= -0.99226987236327651009237126311966043698878388880999145930629122125377810576562664120670104829011879467339159643462223071661848414;
	weights[96] 	= 0.000479030682364070700656552118196130047195620201608982243783448332431807677325159207851465405753913247958515059270272729540985332;

	nodes[97] 	= -0.9956493479690185804839978689340994056220958738412893084003130034086181486221682250070442195618960994496448439105832049287589246;
	weights[97] 	= 0.000270064240674983671808038772029160351648581491408404808863684738743093311266673033038577988059157146426716736454704720367405963;

	nodes[98] 	= -0.99806559713359434832234688360676841910017673936548005607933199767659457336253774999271724761999321517498962541662588884070268139;
	weights[98] 	= 0.000120222337598227454945142651788424397543964166430406251853450242466713421398515456110045638908476668167193614863305524164980955;

	nodes[99] 	= -0.99951628229198806492074553906427644263542228213753449962770323229349876175474541365213988195119601942720379317605295164584067231;
	weights[99] 	= 0.0000300846823474407601943612086867962186318986864775112633698414372486606942873356434669663972884643240971794462507854226920110582;

}
#endif /*(__Gauss_Chebyshev_Second_Kind_Nodes_and_Weights_100_hpp__)*/