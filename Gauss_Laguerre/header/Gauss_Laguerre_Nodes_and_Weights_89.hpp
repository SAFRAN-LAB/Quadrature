//
//        Gauss_Laguerre_Nodes_and_Weights_89.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 89.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_89_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_89_hpp__

void Gauss_Laguerre_Nodes_and_Weights_89(long double*& nodes, long double*& weights) {
	nodes	= new long double[89];
	weights	= new long double[89];

	nodes[0] 	= 0.016154309685175507201815204079363177676175784562813250215167802409933024848770937228178799063238676510333804610660349157776507276;
	weights[0] 	= 0.040793457250452385768284555341336651201866730145231449498084754834037092822240986850831648236239103453600175128573546694445323;

	nodes[1] 	= 0.085121561633170974085603579679853021559589449437741790144514487652164688186750441466438611910078724982146756826874755969814222317;
	weights[1] 	= 0.0886424320787085425077142381781689615299380367487493841975666669984893574953347246272306609106713207337436431912094843403841;

	nodes[2] 	= 0.20922125343053576313533691751371837918678331192999261300731881540318520982426237515472402678420511603314428450050095491976140202;
	weights[2] 	= 0.123053299775089239902043113036393922816969112173222187281656953455382699109763015863347280808753117318977581294561092017829;

	nodes[3] 	= 0.38851921676735966221595185749042103427718019624140035557129130154589507632363106272644313380470847887736225562463833751949768729;
	weights[3] 	= 0.1403012274443783596030543011862084989171264908514042145179102034888252680344641886518315275963932201525913383531394872324;

	nodes[4] 	= 0.62307420031004672381084836377627818462094755134969285686749814038049301432661139549669872998667225371043766497703704555119237216;
	weights[4] 	= 0.140619612524205085009240643762711610421167728129659191132341185957744572003620194803920957251958507090547245670933189758;

	nodes[5] 	= 0.91295957529517929309243657144737981768371967261977975158937096526744100133876830670832985930179679624754102366124440875322576709;
	weights[5] 	= 0.1274555435714348338208980641155690354342001933217315754064220381261321817716739301545398994362105402042009269766430603;

	nodes[6] 	= 1.2582654911800450893380995461355552150309403382325265908454164998166792219838985213350763400974526696525761742051302762213607575;
	weights[6] 	= 0.1060009904501173794148587783352830274778397912788162413858512187777104793773882719690370378780115371699977271728757396;

	nodes[7] 	= 1.6590994083309813362748782815717237007717607975038901234037686075953587474446450225531076324339410457259022397218791493597385775;
	weights[7] 	= 0.081574247851893142332229680189447433393506101317098499777115364572088352412288176493770190639908962960588268379873021;

	nodes[8] 	= 2.1155863834862028035337676353964721282676412709519116120864545876159069603609849181598341801204596215568261999533938345264430772;
	weights[8] 	= 0.05839564424613490473885039445224831023748706285225343084140444955896891093221483670275945420519257274323978702262029;

	nodes[9] 	= 2.6278693196224270323664978525191044379301231330388896434492963821088122299164834851074393371501958817396950328229684309216149047;
	weights[9] 	= 0.0390222238827756553674995724527333950028247815101699521605364171725603921731424969187711186122691870189388129720419;

	nodes[10] 	= 3.1961092278500184156139888684082142210216339092408865371100497293201406863493040850369377641352989792054494420928957865682536903;
	weights[10] 	= 0.024400301931648828981186236650201447272694602213198588380958769442467648968472493770852664554211909058884794944029;

	nodes[11] 	= 3.820485515514793147787663013158765440672210304053349037679041872369378458406025704218764948239587184912456775836322327150063013;
	weights[11] 	= 0.01430114104427531798219310085948430388878516150260196757987780218652076073827807440465590907333412148801474618798;

	nodes[12] 	= 4.5011963060805438423976946059967527471796178115956124231526703380286905313005799024695730806059182326781552296240764867408088353;
	weights[12] 	= 0.0078662939931202649867517374605055488298902904964662279298288334692559699937175954938714198742933527648782512814;

	nodes[13] 	= 5.2384587938153022745129659416888451949233997279212862300872579998140607318731768967586204104115421635799041554661590003765848824;
	weights[13] 	= 0.004064218180927237012648803878632888917118208786670945646000316157498928825117743736513717952998927153336229787;

	nodes[14] 	= 6.0325096355199559508035306525660543707478323027594602673364090485819003262386822558129736962497012150347810717974107911526664069;
	weights[14] 	= 0.001973628897694645894771792286323891490440391766607815508262606686227277265065792005708471554497035648826300016;

	nodes[15] 	= 6.8836053813497063871339989061322175796348233222073447096711458336721606722877495482699283368083114646933149396729313075045551793;
	weights[15] 	= 0.00090121226632624404986592743519235207655908525620529989925607620447725485781027164406057888420159734762496487;

	nodes[16] 	= 7.7920229468210561041085371831289902774016436277663657242312420913376009236962790006847429274135169062867291993069429235028429663;
	weights[16] 	= 0.0003870691665031660852367910234259345975732791981575792452284974159630414856515507304116618228033154855558097;

	nodes[17] 	= 8.7580601282427586815450678587153313115154208108977586708799209363752364528689597613093177456797546078895530481473051338349275657;
	weights[17] 	= 0.0001563956835781856766270837476508786023442228293598432821759056095149495978354897471717124533631131673765361;

	nodes[18] 	= 9.7820361640113554772657272961129010803691656525400685377695612647910266957332191632099927357802702928823308795613228922465294753;
	weights[18] 	= 0.000059452168308103359211571772669846784783925362545451592340158951289132785345371516687680701652027003781945;

	nodes[19] 	= 10.864292344452667512228183280530164848768295060934928737863183228400694614467823424725011470475940985732374848821664472347492122;
	weights[19] 	= 0.000021262453198984256432004154365654221151954749762286813570555222188805652982117531440833884471398789835113;

	nodes[20] 	= 12.0051926731637293662681844992796921579986427249428517418533037456071330132449390636386338037481151839147457832651767215067065;
	weights[20] 	= 7.15363311526338334146353311740839229884251084729391767998390863045100389504110467290840229840375462787e-6;

	nodes[21] 	= 13.205124583114105826387078221064764740968829650968655568297399008689067939785739143826565587518883962766005374157084526506456633;
	weights[21] 	= 2.26383650926182482430254558557900711745001101275482311783333691662360143950769111287668549108379778104e-6;

	nodes[22] 	= 14.464499711102823192174624219686922128785985678689237695925890870474195571806272987643997297428240627593300553844281800689829022;
	weights[22] 	= 6.737230703404610846494640113237467945871526082475988966402356876027602707325230745850498458143325338e-7;

	nodes[23] 	= 15.783754734540246326279125269816612758640803966945451219200028748618032108721520641491143136376044315067516912837234367840154962;
	weights[23] 	= 1.885063797264505144113309992190586471869427186808119449466970964194265304459637339882244897923853158e-7;

	nodes[24] 	= 17.163352274937145422264010808139771038545052538098429754465084316502832565407445191451343127865861062403035207190435268968192969;
	weights[24] 	= 4.95733502532913916401888197488194387253720511339267237158190028386227196093475947450899237542080499e-8;

	nodes[25] 	= 18.603781872940812964216958295760441157085985160056071444599675594434156124569830945419234305013575616706587703450586673855803526;
	weights[25] 	= 1.22489119033073978361719299606472019482704057132882090874358728079553230336770079554692888469484936e-8;

	nodes[26] 	= 20.105561040266172964028943495220837454723845873172217029271492953936290217285465443239422052558052659651924575115621685115809315;
	weights[26] 	= 2.8425240485354481571327473420967068711846520521984400955055132225223836611850455607186396339932237e-9;

	nodes[27] 	= 21.669236394435068151370194618193936002257721271361079276224106722912433415290429950039423989531388859828400966975502769806182758;
	weights[27] 	= 6.1926997031625224318719767961624406526209392191963286312597681869646600086367930928694394848932e-10;

	nodes[28] 	= 23.29538488286706313246772944715993007591217619238755737553626438047198102781055714283847551465742868136626612982365960379225238;
	weights[28] 	= 1.26595642074692691368036776643581272877190193326186974115964765509528323972665001040951399733169e-10;

	nodes[29] 	= 24.984615103569115168701061888440459243091154647363808886641987329121912830542743654893912782253855027937015179192997396531100038;
	weights[29] 	= 2.427145954686681275603856438970877899634784897767738797642487386451897307369973531709808359952e-11;

	nodes[30] 	= 26.737568730459693390103628652449857170402635665790034108893776534707485217657986393666964392074929223199779042734179808349541784;
	weights[30] 	= 4.361831219264495550536901247257711970922677072348559569837083345209546841932018337011641996551e-12;

	nodes[31] 	= 28.554922052247367253169075536549778612671432645156330842478225650364137646670262154226803347360105477618855951190239893257661664;
	weights[31] 	= 7.34305499492231486896743498698496838711139049845822113804261614066232286815293804995161041742e-13;

	nodes[32] 	= 30.437387634778461683162112079409565570364165088794639983056248469258005386984754107566068373388164202631757844729835955004696776;
	weights[32] 	= 1.157284692302258722295213106997068507116624318916131989387222632147407349795172084892521979697e-13;

	nodes[33] 	= 32.385716117889294864721831542433651596435592258323617920625083957925338907373800606711788870744213157091451370366858209595600233;
	weights[33] 	= 1.70632073510586249102107785134915912414094235519209270827524058637017910157270583885807646835e-14;

	nodes[34] 	= 34.400698159064680578908536016015200666736880708331308343085041412894417483923479833118250486235465925861610863493380231322621471;
	weights[34] 	= 2.351906954445893106947329455531537435454219942223286021401249377004691616187941798196658325e-15;

	nodes[35] 	= 36.483166537637904519762047923683720096147043203368730977830263516866936073115858778554958593913646182567196170845004992281529725;
	weights[35] 	= 3.028170943460117217729297859812900485627504248644757155792010546399778376807521677398372467e-16;

	nodes[36] 	= 38.633998434894211862798850103734723276143295734595666168696525601574888944983156757239863294274835647651149575978190362428977108;
	weights[36] 	= 3.639001520073115716841374767848596119553979002430333892063319993121882707210976321032912854e-17;

	nodes[37] 	= 40.854117907290482954782742596272750211565843996153304294659702381481285090971565447612637684300960511578390928535799953662775809;
	weights[37] 	= 4.07797597075418564670027406124689783690554940683877618878592097000083205932862663051708024e-18;

	nodes[38] 	= 43.144498572114221637186025992444456013575682173783580357389511485686496588571588582636044129136777567457606606823430993479035257;
	weights[38] 	= 4.2575898097453321796813367469156794561127601016675454073352035371757263049527116384988331e-19;

	nodes[39] 	= 45.506166527317833231396516607608062500437763041300510202520944323589263674053234770061360499652157740521657834989413430923893963;
	weights[39] 	= 4.1372514738109418515495162314359437781593745009382914202185358566193894583275408895484838e-20;

	nodes[40] 	= 47.940203530029993734366641102066001635092719613139528093395288230992910177619357645024390722554465910114920121371721378926798378;
	weights[40] 	= 3.737971659114537469819010575057290852766799341556205655508552233168721592718755438436301e-21;

	nodes[41] 	= 50.447750461424933842952037124270395675220348685391794549885316583950043622245761935176297522693343478822634109942903337046993396;
	weights[41] 	= 3.136581308646678050055237873008289537323578903689002074638008218302340225842938125230907e-22;

	nodes[42] 	= 53.03001110929465368111400206434991129866223305273213105887635401739510278423698455694029834337741391717150078721363058765831303;
	weights[42] 	= 2.441551808599435776412661691656681416194539720303542780524721679429804482951532456246801e-23;

	nodes[43] 	= 55.688256303904761257163701503612057073211554020920087253132066153134966421643988268450294280338637094918947026849228698886325881;
	weights[43] 	= 1.76086795533063250236317067383786298871052937975559536908135950877747888163684756854661e-24;

	nodes[44] 	= 58.423828447625684356400315255084248759471370914387072666270520578319041997517797252645038151283068955238118666952133291496992133;
	weights[44] 	= 1.17508703324639109395980907987274127448049237444977682507143417081190926274307966025893e-25;

	nodes[45] 	= 61.238146484542974338592321881904086428571665758503140233095240272678605533326563072447116375874417978332094411569781361271022231;
	weights[45] 	= 7.2459093025531430033260163206933663128701558046542124425527166443161796687245474924567e-27;

	nodes[46] 	= 64.132711362915581254460238418517879713690228851183377523512107095757392764735970767344177203251575764814504025841724003194167177;
	weights[46] 	= 4.1224611185597356605373441755343477721289138842004290070536533866352162471911322198059e-28;

	nodes[47] 	= 67.109112051154825333716083106386014475567404067866145186532887176850853986715987825852758116907978895246582291611368828373545992;
	weights[47] 	= 2.1606464233450169593536819505224795612993275670725224917915250257233852214599557786408e-29;

	nodes[48] 	= 70.169032177166246171755842303532272233469172814465633307502712174018882247357450296043781675820660879588451376608520520796843951;
	weights[48] 	= 1.0414911425038192603931529007741965165223912119242202878029803189662780520212365337355e-30;

	nodes[49] 	= 73.314257371710446594329094877329512018749139736900390463854521599789295404810924398721442454515822319053707056778440851969787554;
	weights[49] 	= 4.609024378571345143733327620737629459609835677566115817015314937378922611904779340037e-32;

	nodes[50] 	= 76.54668340924178358522911819427914854021345420029498124013702788576315300271353194940585760017261016030804903795106603637927101;
	weights[50] 	= 1.869101292231259698576332502113889617869736517824899092471313156711493436719122586064e-33;

	nodes[51] 	= 79.868325254902530441296420918958751139782215414847729098725959661357977425963030668175316245829645201055200653102422648475214887;
	weights[51] 	= 6.93208916513961531496313563010992375010315773892579037802708785295619252939433920324e-35;

	nodes[52] 	= 83.281327144517810581550706132300185512807967923863723327060615699285581071685532174751403653666230116326633118059857980141899699;
	weights[52] 	= 2.34630178716215394942654164231395197052233375988633371846992696324794469264504752916e-36;

	nodes[53] 	= 86.787973846221415495280884445031042498889446858248844226066724689123369160095511763806498021380764940761321408752373317739920013;
	weights[53] 	= 7.23122827719569751961254901045226555756101366308941026054805045804542032771051660201e-38;

	nodes[54] 	= 90.390703278587336070879187674539056690520209821807321305134116814757042987627106246852695392056482206015963924308838929128228516;
	weights[54] 	= 2.02442859653034255510330730107672591003055912809550224834363729899654899164623061461e-39;

	nodes[55] 	= 94.092120691915741427074997121257273749932513661179825073043196760385279141823124287230923545554675190650487163696446419905330642;
	weights[55] 	= 5.1349518696142362613771216897433300311684071314191855814939085672557256864634655037e-41;

	nodes[56] 	= 97.895014657990501213387303154052366380174444404440411029279922085914160102441898178818703269079097787570920475730923285926990296;
	weights[56] 	= 1.17683587763551228906137101357103082665542789999896310519969686522353714929489702465e-42;

	nodes[57] 	= 101.80237516094299323515668951113458782958094573794192379936905026645921439021294805498983455118252371498634401991712652189336733;
	weights[57] 	= 2.4297193864946650559816384559175930365036474408826162996102722097342959819355541935e-44;

	nodes[58] 	= 105.81741414009532139061207670474302423403191889507343711149663177426149673633340600624693063623010856154620747177622851790238322;
	weights[58] 	= 4.5048082703287495258872677687206209258232614141159696644257347451121273981395665056e-46;

	nodes[59] 	= 109.94358890777731373239314953160959013734087444324558306457899055440979514896973959791921058255267669495491808654436875056218265;
	weights[59] 	= 7.4746334903571212626554466565664932261722811496796525936510529710752177490878162604e-48;

	nodes[60] 	= 114.18462895500914534527125724593884989722216678585415679807311962708915027092526974329281351725629739429105722051135053056616728;
	weights[60] 	= 1.10584170017904409984605717786531827764992896605502756978553413868718317907414258832e-49;

	nodes[61] 	= 118.54456677077550666825401753683219661898730282908664386250995501269866256169736034722863299286250101583532288817215580508995164;
	weights[61] 	= 1.4529510754477773015119077397178075047994403924428850774671085592382601262974813614e-51;

	nodes[62] 	= 123.02777344328872932865285117143865606704843889092197806055070513048260886954689441878728741209360325113781879820985618080234648;
	weights[62] 	= 1.688043522362907260975590926198813596170684235044338494273218293407186843023904591e-53;

	nodes[63] 	= 127.63899999346335885237669703499745499095602569093616852855892161138495201908692480762755220030970515486871018755746442074927249;
	weights[63] 	= 1.7260246322037237363243719098826473710527838954419292147113747594091609769290701032e-55;

	nodes[64] 	= 132.38342562450824434517332357564377009368551722954522920186178573871831844722988020027333301306791997038146560707398989046248414;
	weights[64] 	= 1.5453001731826795809894744287743765320108606539160913296335493295047798642781368648e-57;

	nodes[65] 	= 137.26671437459942024059621720562942371726590941468779164908678079113875214562210873498258196994182415133403276903707974326451853;
	weights[65] 	= 1.20460452169779317940831235649010837251216676669717360836818768455020162434569817316e-59;

	nodes[66] 	= 142.2950820564568450277877142394864893081626189495243563361805893101121853834736815013248980355540028120085172193767174015034811;
	weights[66] 	= 8.1258331861647425670534314934646461055184733849146700287790889809377245052018669035e-62;

	nodes[67] 	= 147.47537589281135164959023347356872605758545950867297214487963280944181952063619410500405026065582735344286316717802468202159842;
	weights[67] 	= 4.7112670372919042064719623629529732343589561619982944836612468713855557205357431106e-64;

	nodes[68] 	= 152.8151699596026881753063327479548937000351440883235434135480610705829682290727472724948118748249225597299780666420288564808009;
	weights[68] 	= 2.33021666887304531523828323502037961565742033948208713905959640281531736760195776729e-66;

	nodes[69] 	= 158.32288050103392297125645027762276175920018626299344272965841632852437454557656307679083791905748350445045805033187354936613173;
	weights[69] 	= 9.750443335649651549156669651994854081820127356686351943839858579394033932144146675e-69;

	nodes[70] 	= 164.00790648819309092524280804736459235488526813191152522849125856271565819127610040815075683920981184509806402150868955411189375;
	weights[70] 	= 3.41964311886004051372416909909674477483654882855156797917557611815605733428386928647e-71;

	nodes[71] 	= 169.88080261480980494182624967401544800513193008756700501074554556911729049059239528750230851432518974703793268106949261611113171;
	weights[71] 	= 9.94783600075153837479205962203864304128573703955932738823257488894803894376903235021e-74;

	nodes[72] 	= 175.95349450310413958030298221351643855282096472596466738425369841738915168090894113059668035437666132608370422950502476052307786;
	weights[72] 	= 2.372154809953178860152966151467445315637973307476177472343554240017943633259854305059e-76;

	nodes[73] 	= 182.23954960968272292283284746655359054432018067767630412713053955714096786707688573851793634912705954025705560083313828460333404;
	weights[73] 	= 4.575046523553545043070426293433746237551464763216657059073494367179630821697261703058e-79;

	nodes[74] 	= 188.75452278369048355577340224125194073365274636878173404559389003795970685311758937489941327755729672582317306962132445949901611;
	weights[74] 	= 7.027587940024262998749662169602972428243028353430549881536146619361359995180282152504e-82;

	nodes[75] 	= 195.5164036335542763352782512416842970395377759565375384379173008833588165875701160204595043215122425771891416222551137297864279;
	weights[75] 	= 8.4460433944989507722577904922576747460993384610904764055032585044830828082059356049964e-85;

	nodes[76] 	= 202.54620548659282900832237207422640713747248633774220741208774842541915957037218432335944150628859176186169412062926800918260266;
	weights[76] 	= 7.77895132871596919504349963854963498337746181673178390515071512178394126162732946262e-88;

	nodes[77] 	= 209.86875570878728139991888752066130497581942593400602328693454141512852320454148359852030010305728839164486698879796842593339023;
	weights[77] 	= 5.35751881077251138019154814141257139636437368211516430322006962098358558405145992141249e-91;

	nodes[78] 	= 217.51377978864031433713461321628174012919711547982859157085017652218969410480580844460925458106430305141711358556209129132747528;
	weights[78] 	= 2.679437044104602148799195563546579396720808955331604263973430825108835987899338082669946e-94;

	nodes[79] 	= 225.5174268659715490717399537554520109673183864067117427773257325712472135998193705958453231315346470305914996737566142114896814;
	weights[79] 	= 9.390359308402068213881174633529453764529590420268913738628992672130894693870615695966462e-98;

	nodes[80] 	= 233.92448206124825328093802774249946685948623800419725298292134834131652519682224862324414404400404619222302408546468838853093005;
	weights[80] 	= 2.206585884204989612361855043174528467437485053346405084846600449547494298507245771587203e-101;

	nodes[81] 	= 242.79169241025181375026343454682644031883217373186583531285082680905780050394232776747804179181220889056859632312053852011474927;
	weights[81] 	= 3.28783135114109084046950301338364584483266364076265524505808378759876261294732541871991934e-105;

	nodes[82] 	= 252.19299117063873301313769683144005950493888563566995453133691692838999582542063203542164021019962775002009400902403069729846834;
	weights[82] 	= 2.888653339535671666937143803512678288874245551004626855839635546545908913022447791420389846e-109;

	nodes[83] 	= 262.2281655039633458295337692664723348419299660840289969823575864337484672453537765766587089740479020351430440117606920452612423;
	weights[83] 	= 1.3569403903298068301479915666658136885608961804613053615038491931671756864368103743643971868e-113;

	nodes[84] 	= 273.03828444124121797730443610100947119600885069244208072190184029765863231385326532801137562530137203771461675050132004351152549;
	weights[84] 	= 2.96840009857491285593713112470599492423496501364538672319494417471281612783191353796298635677e-118;

	nodes[85] 	= 284.83586786331246296823278000576646162299459755524459648125775654419187956189498882891653991848501432899620328833925000185427301;
	weights[85] 	= 2.457335829602387579904839317249425947205576961433050453502118416555549344663346699912592544701e-123;

	nodes[86] 	= 297.97229479633891977301502524252531065048335662793028687830433440449798594587713128172000207669446414195141795583699386167752446;
	weights[86] 	= 5.4697745510410531435171340758035588467794919628903139921716106440021265778344259768469015712058e-129;

	nodes[87] 	= 313.12310375588476781743812798419210639138057522004250677796456736008777982795972184144780380594738849228396349994906519813907039;
	weights[87] 	= 1.703869949362155114459854064013631643403681215045008724740982448026175060714283681074518791136073e-135;

	nodes[88] 	= 332.03742604255221670118655806477671129693104155950300505970603647700374623130355583568203200102330426779179567102477626381788376;
	weights[88] 	= 1.396866412727985061330098381071586122846851694046843392372059341950730586855163919465891707025575177e-143;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_89_hpp__)*/