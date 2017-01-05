//
//        Gauss_Hermite_Nodes_and_Weights_97.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:42:47.
//
//
//        Array of nodes and weights for Gauss Hermite quadrature of order 97.
//
//

#ifndef __Gauss_Hermite_Nodes_and_Weights_97_hpp__
#define __Gauss_Hermite_Nodes_and_Weights_97_hpp__

void Gauss_Hermite_Nodes_and_Weights_97(long double*& nodes, long double*& weights) {
	nodes	= new long double[97];
	weights	= new long double[97];

	nodes[0] 	= 0;
	weights[0] 	= 0.22497264372314603720517127513068298022642627638476339949005687483326987425209669293417512614874847646738063831874254661598607677;

	nodes[1] 	= -0.22498237681566590871368860253473511729335073682404479367635673076217449572693431315439661085110732182565370551951350063399964512;
	weights[1] 	= 0.213896347029358265312573517118750698230912367705403261647113790875970830412040822826732173567262114225321729145936551088767133;

	nodes[2] 	= 0.22498237681566590871368860253473511729335073682404479367635673076217449572693431315439661085110732182565370551951350063399964512;
	weights[2] 	= 0.213896347029358265312573517118750698230912367705403261647113790875970830412040822826732173567262114225321729145936551088767133;

	nodes[3] 	= -0.45002319163025311724223584289090822545318753163486049524261143386800592395533840761580930013660701859604599741453706259396039415;
	weights[3] 	= 0.18382375801093333209212415014118247774964619558772887852888200802502760456631906759036941227606933252676753069788464730255239;

	nodes[4] 	= 0.45002319163025311724223584289090822545318753163486049524261143386800592395533840761580930013660701859604599741453706259396039415;
	weights[4] 	= 0.18382375801093333209212415014118247774964619558772887852888200802502760456631906759036941227606933252676753069788464730255239;

	nodes[5] 	= -0.67518108007869281983844891112126042974132933883596908177414658155197513927498585583186912371826191873243426329663181575505824278;
	weights[5] 	= 0.1427763636456641739561682184259447488689862157488636539481507417917918374822751476251962857414973355993048161927913094747717;

	nodes[6] 	= 0.67518108007869281983844891112126042974132933883596908177414658155197513927498585583186912371826191873243426329663181575505824278;
	weights[6] 	= 0.1427763636456641739561682184259447488689862157488636539481507417917918374822751476251962857414973355993048161927913094747717;

	nodes[7] 	= -0.90051507502248327139936599288636599623582050649868448675711570823564899745755752503997129166217619252996082241454188342988649424;
	weights[7] 	= 0.10019666687230209463459854278514790635279485098073685244710417631360145112561119163584302937878896508759682696602006724544;

	nodes[8] 	= 0.90051507502248327139936599288636599623582050649868448675711570823564899745755752503997129166217619252996082241454188342988649424;
	weights[8] 	= 0.10019666687230209463459854278514790635279485098073685244710417631360145112561119163584302937878896508759682696602006724544;

	nodes[9] 	= -1.1260848100881036123791345849402313323478483101411830118389082916781359043720556910420289552196774597621147130805293181077799647;
	weights[9] 	= 0.0635084957570828415093693557044096408156406367097965465056757783101541176825448623516054305300515298819206896149760493836;

	nodes[10] 	= 1.1260848100881036123791345849402313323478483101411830118389082916781359043720556910420289552196774597621147130805293181077799647;
	weights[10] 	= 0.0635084957570828415093693557044096408156406367097965465056757783101541176825448623516054305300515298819206896149760493836;

	nodes[11] 	= -1.3519507292254075702353868211763366022974168217041766448849744106278093722884625395549951105149458467421723854798223836079189206;
	weights[11] 	= 0.036339904964249971416542865969539534212411046666361721266402398945484167481265526976842812026757474025984975100090618813;

	nodes[12] 	= 1.3519507292254075702353868211763366022974168217041766448849744106278093722884625395549951105149458467421723854798223836079189206;
	weights[12] 	= 0.036339904964249971416542865969539534212411046666361721266402398945484167481265526976842812026757474025984975100090618813;

	nodes[13] 	= -1.5781743044796298468833975672810787810992887560653777854812713983989300853132127052388947438825645469683002483283701534826971901;
	weights[13] 	= 0.01876083895149953994676671735246130643055254556822883181201403824371968075899104900497721742999710354443453027963165012;

	nodes[14] 	= 1.5781743044796298468833975672810787810992887560653777854812713983989300853132127052388947438825645469683002483283701534826971901;
	weights[14] 	= 0.01876083895149953994676671735246130643055254556822883181201403824371968075899104900497721742999710354443453027963165012;

	nodes[15] 	= -1.8048182643389761333042155903381423917155839335732381282450137262222064082622096610654482849813466036422071631838189586704746574;
	weights[15] 	= 0.00873232890563288781676231929926376167128108636347893740322223517663643240115575041457104728459685027295532580588304941;

	nodes[16] 	= 1.8048182643389761333042155903381423917155839335732381282450137262222064082622096610654482849813466036422071631838189586704746574;
	weights[16] 	= 0.00873232890563288781676231929926376167128108636347893740322223517663643240115575041457104728459685027295532580588304941;

	nodes[17] 	= -2.0319468352407692560990574279654594743363288892358277299174822864899932692339439734338522407885062134882665189945473987942105635;
	weights[17] 	= 0.0036614915226082968331602043802173428613619869967103026962475954102869757309549428186316755038436858699465327965498872;

	nodes[18] 	= 2.0319468352407692560990574279654594743363288892358277299174822864899932692339439734338522407885062134882665189945473987942105635;
	weights[18] 	= 0.0036614915226082968331602043802173428613619869967103026962475954102869757309549428186316755038436858699465327965498872;

	nodes[19] 	= -2.2596259991006340451007914140567913777240814037080511015808398752451737802713980432100304996122647383220357535138796100770819824;
	weights[19] 	= 0.001381727961537441133428293289445119867511770499479088854712635080817065259906975065226000952485724899184028383811308;

	nodes[20] 	= 2.2596259991006340451007914140567913777240814037080511015808398752451737802713980432100304996122647383220357535138796100770819824;
	weights[20] 	= 0.001381727961537441133428293289445119867511770499479088854712635080817065259906975065226000952485724899184028383811308;

	nodes[21] 	= -2.4879237700815033259175833307743798924399425735430798812572348823818633237086782535074248820806344516619223317297498383646428956;
	weights[21] 	= 0.00046876282593032442942546779377000539760741110497170710526133898258157258279163685361214002864854144793049731706804;

	nodes[22] 	= 2.4879237700815033259175833307743798924399425735430798812572348823818633237086782535074248820806344516619223317297498383646428956;
	weights[22] 	= 0.00046876282593032442942546779377000539760741110497170710526133898258157258279163685361214002864854144793049731706804;

	nodes[23] 	= -2.7169104942556110880176301539458990770034715734193224150535002563193908460456416862499976077727693389230825724489068903027781306;
	weights[23] 	= 0.000142797131287816257506208625629785406822198575825559975736238099376517034699482701010907872641108472665522142054832;

	nodes[24] 	= 2.7169104942556110880176301539458990770034715734193224150535002563193908460456416862499976077727693389230825724489068903027781306;
	weights[24] 	= 0.000142797131287816257506208625629785406822198575825559975736238099376517034699482701010907872641108472665522142054832;

	nodes[25] 	= -2.9466591763501873219240253726586352363346197132650835640278612455569199744545020140403692326549052266800766201765219331801086383;
	weights[25] 	= 0.00003900566158199862960028896910099398741873074750345461391442683454248192331128329344334772574074234016246189017905;

	nodes[26] 	= 2.9466591763501873219240253726586352363346197132650835640278612455569199744545020140403692326549052266800766201765219331801086383;
	weights[26] 	= 0.00003900566158199862960028896910099398741873074750345461391442683454248192331128329344334772574074234016246189017905;

	nodes[27] 	= -3.1772458384281860374781552223097441233565319283910442957913334566434593628887431709957105128891969239542724235504266130651989728;
	weights[27] 	= 9.53929546893678865861198435129607016027632338928748234458714287344925157024941918262774839694679400495543306514e-6;

	nodes[28] 	= 3.1772458384281860374781552223097441233565319283910442957913334566434593628887431709957105128891969239542724235504266130651989728;
	weights[28] 	= 9.53929546893678865861198435129607016027632338928748234458714287344925157024941918262774839694679400495543306514e-6;

	nodes[29] 	= -3.4087499161671787174242057210196342759418862141979047279991364343216906823372885846245406965874348650258621105064680163885037258;
	weights[29] 	= 2.08522014453493885147403983020346731381208767107365308308301397994524163372352516181345311837700045053467945761e-6;

	nodes[30] 	= 3.4087499161671787174242057210196342759418862141979047279991364343216906823372885846245406965874348650258621105064680163885037258;
	weights[30] 	= 2.08522014453493885147403983020346731381208767107365308308301397994524163372352516181345311837700045053467945761e-6;

	nodes[31] 	= -3.6412546993987249256800829604414286364770007485480297033355013795392438125325254317925360520364082035638859417058303307049767837;
	weights[31] 	= 4.0665248009122614097552112616164984429812307459003238771266879133743527585812052287081749292343842307763623106e-7;

	nodes[32] 	= 3.6412546993987249256800829604414286364770007485480297033355013795392438125325254317925360520364082035638859417058303307049767837;
	weights[32] 	= 4.0665248009122614097552112616164984429812307459003238771266879133743527585812052287081749292343842307763623106e-7;

	nodes[33] 	= -3.8748478248038932963978440432875995389229490078149697419864232087929174260639089879733527658653485706096648485129740906991719092;
	weights[33] 	= 7.060510388697654213366522786207898093903262337044790281715138112430910255443695135420522254584521935941429333e-8;

	nodes[34] 	= 3.8748478248038932963978440432875995389229490078149697419864232087929174260639089879733527658653485706096648485129740906991719092;
	weights[34] 	= 7.060510388697654213366522786207898093903262337044790281715138112430910255443695135420522254584521935941429333e-8;

	nodes[35] 	= -4.1096218301890064419836231241209147991280071947261591858883031195843635727948074387230944537451228589080923510603389656882767694;
	weights[35] 	= 1.088941143293617396536385321075609262713964845143715313576720513509299207070556546976705798631677753866625383e-8;

	nodes[36] 	= 4.1096218301890064419836231241209147991280071947261591858883031195843635727948074387230944537451228589080923510603389656882767694;
	weights[36] 	= 1.088941143293617396536385321075609262713964845143715313576720513509299207070556546976705798631677753866625383e-8;

	nodes[37] 	= -4.3456747816687635885751804306088072619119390229501001260702035783688095765094231847231466535305109833950866363196463525346989996;
	weights[37] 	= 1.48814039836819252438084068542206049711083907106107409264730002505557056577555633642398522165167326423231307e-9;

	nodes[38] 	= 4.3456747816687635885751804306088072619119390229501001260702035783688095765094231847231466535305109833950866363196463525346989996;
	weights[38] 	= 1.48814039836819252438084068542206049711083907106107409264730002505557056577555633642398522165167326423231307e-9;

	nodes[39] 	= -4.5831109874666335002571437849686257017994112591334852632716454201749724130027340489856609002373412202876306078202706546291179904;
	weights[39] 	= 1.79705675995709851598504897713933612591440892183835302383659787310118358634635521428058501441681328514024372e-10;

	nodes[40] 	= 4.5831109874666335002571437849686257017994112591334852632716454201749724130027340489856609002373412202876306078202706546291179904;
	weights[40] 	= 1.79705675995709851598504897713933612591440892183835302383659787310118358634635521428058501441681328514024372e-10;

	nodes[41] 	= -4.8220418150442855895352242376672184802477393254210355231692492781246938491793406864228809622254466326633803356059191434686411805;
	weights[41] 	= 1.9118156866346738776946723771963572791884526028539519867570466501729594664720643851459180994881577898758224e-11;

	nodes[42] 	= 4.8220418150442855895352242376672184802477393254210355231692492781246938491793406864228809622254466326633803356059191434686411805;
	weights[42] 	= 1.9118156866346738776946723771963572791884526028539519867570466501729594664720643851459180994881577898758224e-11;

	nodes[43] 	= -5.0625866320797569806500539249151025899181908881528321697122056986951538275564452157313388585770560990580825783347344190808532174;
	weights[43] 	= 1.785881462691039554475335190783977527812218274730190073689589265000225705415516201227733673055780906672495e-12;

	nodes[44] 	= 5.0625866320797569806500539249151025899181908881528321697122056986951538275564452157313388585770560990580825783347344190808532174;
	weights[44] 	= 1.785881462691039554475335190783977527812218274730190073689589265000225705415516201227733673055780906672495e-12;

	nodes[45] 	= -5.3048738966808706062283392116693037402614502033307681698203589053083668730150526145891109041294165675874120138135339745072802141;
	weights[45] 	= 1.459455993311699222833799346573472316936641780720053985424401334168794653876345917307990628707556173843577e-13;

	nodes[46] 	= 5.3048738966808706062283392116693037402614502033307681698203589053083668730150526145891109041294165675874120138135339745072802141;
	weights[46] 	= 1.459455993311699222833799346573472316936641780720053985424401334168794653876345917307990628707556173843577e-13;

	nodes[47] 	= -5.5490424284915569734158566280529812825283622486110131139218184189799054366633145340432794209426197166900826351435538749002936139;
	weights[47] 	= 1.03921783778292123698773407016854091241572709786718625949523046986613338969072203771793786965215068613386e-14;

	nodes[48] 	= 5.5490424284915569734158566280529812825283622486110131139218184189799054366633145340432794209426197166900826351435538749002936139;
	weights[48] 	= 1.03921783778292123698773407016854091241572709786718625949523046986613338969072203771793786965215068613386e-14;

	nodes[49] 	= -5.7952429005012474330551000469007544352660568828737795782603424157740416553223570673665943781670804746984775915380549299390058297;
	weights[49] 	= 6.41889944178486678179228143171135828292361576384192270300433287333207178763834941655395355540957184290734e-16;

	nodes[50] 	= 5.7952429005012474330551000469007544352660568828737795782603424157740416553223570673665943781670804746984775915380549299390058297;
	weights[50] 	= 6.41889944178486678179228143171135828292361576384192270300433287333207178763834941655395355540957184290734e-16;

	nodes[51] 	= -6.0436396020679180750804243759304648928536222587575503569564268300298083023981522292479155743514239590297022893367225694483978583;
	weights[51] 	= 3.42220316402353266097948115712463462175422439781222103785121834972475120621614587332595187904358658045753e-17;

	nodes[52] 	= 6.0436396020679180750804243759304648928536222587575503569564268300298083023981522292479155743514239590297022893367225694483978583;
	weights[52] 	= 3.42220316402353266097948115712463462175422439781222103785121834972475120621614587332595187904358658045753e-17;

	nodes[53] 	= -6.2944125378566033225565505000404190405486700171878970022815248294268713496280802816703767087138751076757026929136804075072728076;
	weights[53] 	= 1.56623923540420039700658902769471474609728294040454331510234031443677305100559814993176078957617985506583e-18;

	nodes[54] 	= 6.2944125378566033225565505000404190405486700171878970022815248294268713496280802816703767087138751076757026929136804075072728076;
	weights[54] 	= 1.56623923540420039700658902769471474609728294040454331510234031443677305100559814993176078957617985506583e-18;

	nodes[55] 	= -6.5477599464293749318777339691231268311021623679109966677014010545730147768798085965112848495111346635763639101280144810640877762;
	weights[55] 	= 6.1159230112779139579709954178640131942998192100009135285079633528935926367847431960397520169630094596927e-20;

	nodes[56] 	= 6.5477599464293749318777339691231268311021623679109966677014010545730147768798085965112848495111346635763639101280144810640877762;
	weights[56] 	= 6.1159230112779139579709954178640131942998192100009135285079633528935926367847431960397520169630094596927e-20;

	nodes[57] 	= -6.8039013480672899503706332234116049634467306814226614328419240698784217576939827678084119208754134450283962936510267753543807049;
	weights[57] 	= 2.0237140711644727291108941300106582620971544721904544789745802783629478136161980091527297437117338471814e-21;

	nodes[58] 	= 6.8039013480672899503706332234116049634467306814226614328419240698784217576939827678084119208754134450283962936510267753543807049;
	weights[58] 	= 2.0237140711644727291108941300106582620971544721904544789745802783629478136161980091527297437117338471814e-21;

	nodes[59] 	= -7.0630812669681538835964118766209710261248636335948376397181795217421461990182031845207892225246697905993369356568006431333572962;
	weights[59] 	= 5.631027911077979706597195113210497225080903599889870393489065748993557145219267564213897113876149417713e-23;

	nodes[60] 	= 7.0630812669681538835964118766209710261248636335948376397181795217421461990182031845207892225246697905993369356568006431333572962;
	weights[60] 	= 5.631027911077979706597195113210497225080903599889870393489065748993557145219267564213897113876149417713e-23;

	nodes[61] 	= -7.3255738226210265242474782039384174008793829172042051162281028294950697532920993857311722988336470979986016882025131780036093836;
	weights[61] 	= 1.306231141036761032355905483512064945453164271567516393484371915426213009191763022971438421121332868799e-24;

	nodes[62] 	= 7.3255738226210265242474782039384174008793829172042051162281028294950697532920993857311722988336470979986016882025131780036093836;
	weights[62] 	= 1.306231141036761032355905483512064945453164271567516393484371915426213009191763022971438421121332868799e-24;

	nodes[63] 	= -7.5916884556157713614084026001459865066079945178269260018650708393263269648288315041085331511623634285492087602587103269025527647;
	weights[63] 	= 2.50141393836868137097802521424161582656026202582530459708877382524016757790735552118483307398416505015e-26;

	nodes[64] 	= 7.5916884556157713614084026001459865066079945178269260018650708393263269648288315041085331511623634285492087602587103269025527647;
	weights[64] 	= 2.50141393836868137097802521424161582656026202582530459708877382524016757790735552118483307398416505015e-26;

	nodes[65] 	= -7.8617771549009935923907001580934167938183874020167123019656565233680193870150097611540582608357700106294983150210429598188083535;
	weights[65] 	= 3.910418724779946877658792895131875300917639361000687132339569919574324152990042555073765849781052042223e-28;

	nodes[66] 	= 7.8617771549009935923907001580934167938183874020167123019656565233680193870150097611540582608357700106294983150210429598188083535;
	weights[66] 	= 3.910418724779946877658792895131875300917639361000687132339569919574324152990042555073765849781052042223e-28;

	nodes[67] 	= -8.1362437033700728215331254286509347849500900614518114303768730969829041046541376806844225014563075568664689654340591644619813152;
	weights[67] 	= 4.926605877406648214102964679822713943016714967352472610425530867531555205728368352273959914571138146672e-30;

	nodes[68] 	= 8.1362437033700728215331254286509347849500900614518114303768730969829041046541376806844225014563075568664689654340591644619813152;
	weights[68] 	= 4.926605877406648214102964679822713943016714967352472610425530867531555205728368352273959914571138146672e-30;

	nodes[69] 	= -8.4155556842608690927156620581586546033224455447127749757279580239423316248907865954321923181678399477910584808121108938587069074;
	weights[69] 	= 4.928212660618491936408777751636919232993838433642558479503696951015715177337210137299461728839423214824e-32;

	nodes[70] 	= 8.4155556842608690927156620581586546033224455447127749757279580239423316248907865954321923181678399477910584808121108938587069074;
	weights[70] 	= 4.928212660618491936408777751636919232993838433642558479503696951015715177337210137299461728839423214824e-32;

	nodes[71] 	= -8.7002603389157798346000633636666618530038898564625608241925945153649815047551127217324716624167332835069781519149085056351037588;
	weights[71] 	= 3.846655667750294175031497431722680349615695869348078107032608970395496289396910146295677125270927862004e-34;

	nodes[72] 	= 8.7002603389157798346000633636666618530038898564625608241925945153649815047551127217324716624167332835069781519149085056351037588;
	weights[72] 	= 3.846655667750294175031497431722680349615695869348078107032608970395496289396910146295677125270927862004e-34;

	nodes[73] 	= -8.9910059185401374575494217270679476636005917708629650051472354682512432219407533583734383338487549885021907055460206942518977875;
	weights[73] 	= 2.2950262940501469238322095359894497843508780055654614170324602600878081820211184859678773306301724565023e-36;

	nodes[74] 	= 8.9910059185401374575494217270679476636005917708629650051472354682512432219407533583734383338487549885021907055460206942518977875;
	weights[74] 	= 2.2950262940501469238322095359894497843508780055654614170324602600878081820211184859678773306301724565023e-36;

	nodes[75] 	= -9.2885710764670693533248926706209334438739892591544928158956375039045285641967843929764058962839087380800398118420393620640703302;
	weights[75] 	= 1.0211695752712585073424756185863336272201145115008926683125907718922534812878804998939215985954380099823e-38;

	nodes[76] 	= 9.2885710764670693533248926706209334438739892591544928158956375039045285641967843929764058962839087380800398118420393620640703302;
	weights[76] 	= 1.0211695752712585073424756185863336272201145115008926683125907718922534812878804998939215985954380099823e-38;

	nodes[77] 	= -9.5939063821323533571255562318233189088934843426890599424125901154898186726980810123323163331734867467162775518853747527369612559;
	weights[77] 	= 3.2885519707581376523864754556767164850772709476325564160148959861833309554585277024107185303029105260985e-41;

	nodes[78] 	= 9.5939063821323533571255562318233189088934843426890599424125901154898186726980810123323163331734867467162775518853747527369612559;
	weights[78] 	= 3.2885519707581376523864754556767164850772709476325564160148959861833309554585277024107185303029105260985e-41;

	nodes[79] 	= -9.9081947567061555836856441637336760886525209628522184115283190568490534537290882765282808914369969236788713628534307852836714443;
	weights[79] 	= 7.3860282667905205325590308951918215513290130545207494035527985578667389067302188059534354539055743293315e-44;

	nodes[80] 	= 9.9081947567061555836856441637336760886525209628522184115283190568490534537290882765282808914369969236788713628534307852836714443;
	weights[80] 	= 7.3860282667905205325590308951918215513290130545207494035527985578667389067302188059534354539055743293315e-44;

	nodes[81] 	= -10.232942694191875776248534113501808287660073224597473784232850879848819439001784001283309773989449483536857782204303997902978151;
	weights[81] 	= 1.1039698088171741741333441666837359692475434827246690345587386736358277062879939336480131264224984233066e-46;

	nodes[82] 	= 10.232942694191875776248534113501808287660073224597473784232850879848819439001784001283309773989449483536857782204303997902978151;
	weights[82] 	= 1.1039698088171741741333441666837359692475434827246690345587386736358277062879939336480131264224984233066e-46;

	nodes[83] 	= -10.570124148913190214863914006078079975599833701587216179616525152706371081282089925801739648030276120221591062035511834142430106;
	weights[83] 	= 1.033198609546650559176261082588260643463301012283216117222497818721563218904193909280643424848137934113751e-49;

	nodes[84] 	= 10.570124148913190214863914006078079975599833701587216179616525152706371081282089925801739648030276120221591062035511834142430106;
	weights[84] 	= 1.033198609546650559176261082588260643463301012283216117222497818721563218904193909280643424848137934113751e-49;

	nodes[85] 	= -10.92242030455677654959011224595145040024262403893953677048012906932852338500779534759126304121913187488796320084479831512304742;
	weights[85] 	= 5.57819964386801761310522863577108212873189320270413287151355879796767431771337074149032367184498993933857e-53;

	nodes[86] 	= 10.92242030455677654959011224595145040024262403893953677048012906932852338500779534759126304121913187488796320084479831512304742;
	weights[86] 	= 5.57819964386801761310522863577108212873189320270413287151355879796767431771337074149032367184498993933857e-53;

	nodes[87] 	= -11.293648310231409234549857424418097212843259334532204776365790381894045634550363626981583058800679399190156031643713836102394772;
	weights[87] 	= 1.5480113585024231046443711854775513348803596531962963398307196964193233065078999833178442089830752176017998e-56;

	nodes[88] 	= 11.293648310231409234549857424418097212843259334532204776365790381894045634550363626981583058800679399190156031643713836102394772;
	weights[88] 	= 1.5480113585024231046443711854775513348803596531962963398307196964193233065078999833178442089830752176017998e-56;

	nodes[89] 	= -11.689603736290560106352990234775991599740299480439371062327145546160019296011182098910637438073794125128008214770887191257093103;
	weights[89] 	= 1.8575257861978890391341548441376677661206929610225616242829162264079859200066510214022007430914429672243737e-60;

	nodes[90] 	= 11.689603736290560106352990234775991599740299480439371062327145546160019296011182098910637438073794125128008214770887191257093103;
	weights[90] 	= 1.8575257861978890391341548441376677661206929610225616242829162264079859200066510214022007430914429672243737e-60;

	nodes[91] 	= -12.119952689615966599164742927714334820328103519438564435240250829217378006401635268417670939997608544286630979010029712327232289;
	weights[91] 	= 7.25638792276884473208383572155931801075421440916184736353730021044119872362047684869258312173213473218818303e-65;

	nodes[92] 	= 12.119952689615966599164742927714334820328103519438564435240250829217378006401635268417670939997608544286630979010029712327232289;
	weights[92] 	= 7.25638792276884473208383572155931801075421440916184736353730021044119872362047684869258312173213473218818303e-65;

	nodes[93] 	= -12.603462387096408783121915616069023970767902528670499862321909896838875389835908509292315582562471491406848179169605589332259791;
	weights[93] 	= 5.378214798705800063636317953707026906937381073687645650456141741038088132883825747412725008284741052183424159e-70;

	nodes[94] 	= 12.603462387096408783121915616069023970767902528670499862321909896838875389835908509292315582562471491406848179169605589332259791;
	weights[94] 	= 5.378214798705800063636317953707026906937381073687645650456141741038088132883825747412725008284741052183424159e-70;

	nodes[95] 	= -13.189289029708118034069240695587895362894313057941205496105651237513115800126586966998102402042800864008521916518401055027820373;
	weights[95] 	= 1.91631131971408799593818969312518140436370109369078452426667069263974577225022311813244941557869614773025216952e-76;

	nodes[96] 	= 13.189289029708118034069240695587895362894313057941205496105651237513115800126586966998102402042800864008521916518401055027820373;
	weights[96] 	= 1.91631131971408799593818969312518140436370109369078452426667069263974577225022311813244941557869614773025216952e-76;

}
#endif /*(__Gauss_Hermite_Nodes_and_Weights_97_hpp__)*/