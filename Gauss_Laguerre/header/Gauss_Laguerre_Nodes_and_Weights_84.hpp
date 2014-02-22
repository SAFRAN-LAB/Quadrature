//
//        Gauss_Laguerre_Nodes_and_Weights_84.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-22.09:22:35.
//
//
//        Array of nodes and weights for Gauss Laguerre quadrature of order 84.
//
//

#ifndef __Gauss_Laguerre_Nodes_and_Weights_84_hpp__
#define __Gauss_Laguerre_Nodes_and_Weights_84_hpp__

void Gauss_Laguerre_Nodes_and_Weights_84(long double*& nodes, long double*& weights) {
	nodes	= new long double[84];
	weights	= new long double[84];

	nodes[0] 	= 0.017110206511580912119733961092474017473815147829001470912490297289385925294758864090699658133540606910220237525584007651179966446;
	weights[0] 	= 0.04316612019427382014917249943889958645567994262337903327518487587076990201953629223339468738559937231597509239796990735253787;

	nodes[1] 	= 0.090159154088675732706823707623649887597320213475565913662445525252182980094384462541012853389882850934785529255400646829666324983;
	weights[1] 	= 0.0934175140285358536576678556902035966298848003272150065156654443465018874701934829571336283938255675759680571750191955305857;

	nodes[2] 	= 0.22160633122212220471655024325882096710649551356801736478000589586202335619973407285104808842269078330502377422230435568243023872;
	weights[2] 	= 0.12873634530647736435987561415408404795411461618352285138658117293533118974105592931350962670316482423749103195072508761736;

	nodes[3] 	= 0.41152641354543795917441136539401625426296851412096081539694339548682855758186239481487911258519841216486087422696407461638629952;
	weights[3] 	= 0.1452358932230774527060899786774587059690777791102128955621513026355664093277384225237814571763477472958467454219441774617;

	nodes[4] 	= 0.65998879759661334096185723117059363605114113921642190874937339619271578914357823143371737183152566601609932159950676555317774356;
	weights[4] 	= 0.143562719303854397025076220219777177425192604171839612671024770452876808267917351109863790139564904614079957876046947442;

	nodes[5] 	= 0.96708061666546386650352184847048928806168267029470386133996293003235681144965231904830281269112975862916832727474118002233480767;
	weights[5] 	= 0.12791178754377005693360783715187585223978765241123402810705532956916488988188112538423192031072385422860887756842756551;

	nodes[6] 	= 1.3329090581859829559056452362658709182445232342861607612823660604540225774283715372147936503498162960532897284208874528716578483;
	weights[6] 	= 0.1042277195706318519295121177326995638045218784395795389176304970188698341701196642810713620407341281088890219808071483;

	nodes[7] 	= 1.7576019706200516148380834848746080709456748495270795104392870768076740141900514997933824974245831172456788949498711157214467124;
	weights[7] 	= 0.078325734613681959939312362309944223646543354807490478806124671966047672719284110463234700985323118532648424794412901;

	nodes[8] 	= 2.2413082172545902226920658604633077790473669466680364197279484066364028190985238876789277347532342994309144196634567029812482076;
	weights[8] 	= 0.05457029146582554481371810457917179443247691086444416542994903175551913525565284820194556601638915941577347364174635;

	nodes[9] 	= 2.784198001408081838671029807159050785429017496623805926622609702068826496261329944044379501150120442950018690669101253068237167;
	weights[9] 	= 0.035370956540584443137959662840095940327715157117224529134512227247707295023787341697669660240221120663178406076877;

	nodes[10] 	= 3.3864632138984946584633256574463741796235001472201936405701439610608868604260974032811402847115903707006058847292662244842182319;
	weights[10] 	= 0.021380121816781812057249468806938256524003059364063418471599773836012779664316662715091218332715326158248878067982;

	nodes[11] 	= 4.0483178182683364022827587733947196232938726958989484721701744405692825014536557269934480500207920391192141842545922212365203496;
	weights[11] 	= 0.01207180331886324640732004951341601964788223125935664682914083221721411650504543799414577136994140143987123233449;

	nodes[12] 	= 4.7699982802240826844856857813390223042961874277141744150479188933554655280644250602936533383277147801906683858265432047842501398;
	weights[12] 	= 0.006374525584066015145820403628353950387892051851112358275914469093802351464982772171163018917246045999051425719;

	nodes[13] 	= 5.5517640451262538078874613044414013701201946869601162224709635327628658671842574168664182348081484156746921062210129424516650597;
	weights[13] 	= 0.0031506666168317416477968388674215798991006394491495601922634970750131201756748902017515365429705925921901666673;

	nodes[14] 	= 6.3938980666239821572599680338605111570272265670347225125769994806733264739857491410656948030872380826999199022318839832184601826;
	weights[14] 	= 0.001458445477206876248818916292053311279633026751607836967907867224580439244796077330719229965477848271187265018;

	nodes[15] 	= 7.296707389425573831984847547163005880736530773690183526239735065368163260307411588742154998042556932795552710866796057204259977;
	weights[15] 	= 0.00063252950585159139914742833349447825409105555657371173016299839161136586321944418611609982269039615538868702;

	nodes[16] 	= 8.2605237893480461888936276115875862739240322539036684403548910927518172474959394654963122010658609095466070862419462459316699636;
	weights[16] 	= 0.00025708533894054026546950118126054337579739948573494495125704527363713430344717392153940713918440341081092841;

	nodes[17] 	= 9.2857044740611417341938873383826717653497401086846169802470476438087306161518499479878991118530434502547941787297871644837355097;
	weights[17] 	= 0.0000979329723543324672644805089448573065122256686535032260484524638730651703862412183188050432260917943440123;

	nodes[18] 	= 10.372632848286701971357071403128530191146173725024148614197906711950892906648477307706192767627388818164248806231153406255545988;
	weights[18] 	= 0.000034965522145703836374000673234231639522554611835513733912977853813622134992626557669145082479128377952028;

	nodes[19] 	= 11.52171934761555565810572379150810813661911978170132648671256456876750202373232061519193985227406310072287151457006035728702278;
	weights[19] 	= 0.000011699753133257274858784701958251815803554529774862610633423066563485067190631747422307226322220788199276;

	nodes[20] 	= 12.733402345556949845590299897598637849957700087452613353371144391385559345727450790512553592664721446026389987732149884396348879;
	weights[20] 	= 3.668358422627035801121195526051165097042823613995231913162307757504518154390344200441204349172958225046e-6;

	nodes[21] 	= 14.008149138941541683031603593604374161404449192206823039480918685497212135866524367754171080915360942612327716214245453353522736;
	weights[21] 	= 1.07752716401074450776173312342942418329693958938768596578524708943167181025246741071061549499291453989e-6;

	nodes[22] 	= 15.346457017362688423933205948139130598878059377518427631916221901301620092413686460563485314619484947605401050159934201102823314;
	weights[22] 	= 2.9642988565844917338771589692077868993877165194963895182650404360478604144137339631258783619937691935e-7;

	nodes[23] 	= 16.748854422968879506095602048584787196342276668016880970346476198900296582980880324094518447571076062127793046990310546096445163;
	weights[23] 	= 7.634906977585879033004343036069251182339804510172772856138879013158069392732276900657610188896539582e-8;

	nodes[24] 	= 18.215902207620978536724905701643073547185706006735970152543085766925485482544644916397362498039257664468821732453240374991207556;
	weights[24] 	= 1.840350054131856637899989985633591223315636817212597091137457118479078261151619214564248234457065672e-8;

	nodes[25] 	= 19.748194995211437185370972541989481430242345654695032382059730655702625498419327136189095725929700712831716256302719056226504249;
	weights[25] 	= 4.14969470181563549454361547940279133915752855802700728090626093422429987502697369845330793431210122e-9;

	nodes[26] 	= 21.346362657820499340599244834059263414572946674677805617512169174913942018663458472459166777338186923864519308976273995444527491;
	weights[26] 	= 8.7484832337102171998840248790003078950783474110716747220197317354243932181848845157910089062870948e-10;

	nodes[27] 	= 23.011071915370288999061685179046891981877688715589998988840925484484713074499475912111306769827622979602094303170851248985058108;
	weights[27] 	= 1.723496124772158198218380520138570193710190106489769636919136900934118010368445497562022704457073e-10;

	nodes[28] 	= 24.743028069547502957946676516390523449022159575689138596128405285763777270706900852749879718033493667088308347093888143754777778;
	weights[28] 	= 3.170932782394893175484725681629057010320585113897411100675049295741907377218715996914590271065778e-11;

	nodes[29] 	= 26.542976884017818006225536663590492397915032118733279755338048102231691415344456335483191794207484066706053332031133293786343249;
	weights[29] 	= 5.44476702391700088803445129388906611943862414093551862819965464648783211021728854449463754072473e-12;

	nodes[30] 	= 28.411706624371846563605200349515116351280232238113797788582113411203120177776244362564984197900605557729927782989431275879764464;
	weights[30] 	= 8.7192934113120966400249425818560457079726043707996609947605208159116897372217698838494206335967e-13;

	nodes[31] 	= 30.350050272849076178159564296650473498374892645233446303696487917936248834835368703684237014474620986728115873060094495969594854;
	weights[31] 	= 1.3012614065946288685835253209384497325373487350866262767103986371663861388466954114860211498756e-13;

	nodes[32] 	= 32.358887934712748776168379314639857732662671346275399425306407599488888781988819987582477573970711021731723945979343890918408319;
	weights[32] 	= 1.808328588492715259440956961471654955012521233466246744359061249157617735385242948139090863136e-14;

	nodes[33] 	= 34.439149455230512699955350265479395034589111245665551141846580791297918618093285239816268701584117017479529582130319605400242231;
	weights[33] 	= 2.33799685295571174653849002091340095231970840179105488209855106394897669083878938713716079891e-15;

	nodes[34] 	= 36.59181726859484434710254255176488420012013771686876148735535149931510752951263509168361266818316870845580328220914035655622076;
	weights[34] 	= 2.80972319388998448281418639136081088794181859603650608403126840229928545732355663385831591513e-16;

	nodes[35] 	= 38.817929502843455689945936133832630658463240004170555638432099622113273353199287091168709402906701865048587863734873948509900443;
	weights[35] 	= 3.1355187923462809737716093824128250974302283230843221370049421330054323162135151457639019903e-17;

	nodes[36] 	= 41.118583367972447240660570370998627061308052826025122985006624653164747952484589950754447265954558701395348217485955491972821758;
	weights[36] 	= 3.2458426924558945915171163286867983796929967340558074526889493379134696219196426555552653433e-18;

	nodes[37] 	= 43.494938858044654380212191123534394713920691853893150270742860507781287117526988753958391835397404239867349942668524084049539925;
	weights[37] 	= 3.113400287501634116522498849681803073827515595622667726698339069925189692412220987740881663e-19;

	nodes[38] 	= 45.94822280226739469937855489238063887669299531210978495620248036562685821104014887148484013098024782230164356379112656184013193;
	weights[38] 	= 2.763877981365516461188245501606698682261118315163257467676668050372910718504880553226987256e-20;

	nodes[39] 	= 48.479733304849870590727144634048451472954302501526210066653298168909790217408423381824614042394133531690994442979202924300416907;
	weights[39] 	= 2.26795342275358254382786971856973556418675778020744314965956859564969338969989202609238067e-21;

	nodes[40] 	= 51.090844619074310004659745873862279522695912875105310923953335575020853127906989084397754271161211109146103872011975970424910262;
	weights[40] 	= 1.71791512409029318164689065011285760851719674105029735512554520901834649037817991152107883e-22;

	nodes[41] 	= 53.783012507576338523040714414203879393824542624356724322804032758400717086295591457002542191119809617862215818428743938165204616;
	weights[41] 	= 1.1995167907883707621535915891645175176353302425199524269413790805737880757503464667947294e-23;

	nodes[42] 	= 56.557780148511528486718772342191702256699279554198397311130970224923899587649821216863979148843871066188004515125483999480346043;
	weights[42] 	= 7.708930419042662777069705267333144260560712614220158816091033302784700465741352866891843e-25;

	nodes[43] 	= 59.416784656309771508673819885279853961867537689152537331787163416309632912033295329964411431516886155070098063626421157704884919;
	weights[43] 	= 4.552708406657979849352686178284606453544629462351924173457216884394130613339145628667701e-26;

	nodes[44] 	= 62.361764296361353250067059288200344504822149247508292534703750360702528909226727186151400139949070479535309321007285299793919338;
	weights[44] 	= 2.466572150512007751434297803275997141570547937237662887724781760112853724711028147601307e-27;

	nodes[45] 	= 65.394566485577018212306908983726191836164033825009203341256776952196193501197395486466580730804628986483279964418144453110579496;
	weights[45] 	= 1.223710520797036993735656236651107754229981058329210095792167967830895197420590598633635e-28;

	nodes[46] 	= 68.517156685739073347145927987761739306696828668359176159395674280310207868507016161520424245584921156556436999039915689923912793;
	weights[46] 	= 5.54862692185158107216847292072193648746065767758963154487938585753624472382883028012342e-30;

	nodes[47] 	= 71.731628314435732478270228385973636471473683424465445579905340777143330984774308313368376793740058952441440158551201420662444549;
	weights[47] 	= 2.29466695998547573249467928759289349737561837087926744813927460454127119564947086739766e-31;

	nodes[48] 	= 75.040213819803582963581825167501590347194973838494415447976480830845643405401755839356997624150400952718988811110277211757476976;
	weights[48] 	= 8.6362659359365477360469366003455543866869005224311900880048698831308488195696964757435e-33;

	nodes[49] 	= 78.445297091122002024692908236348768849518693920194449295832461331556112481562970694848518943704542149158501644045200306141562884;
	weights[49] 	= 2.95109860133487846940714662178993968644115375126092079860549151439198998947144180262844e-34;

	nodes[50] 	= 81.949427408560005759345973070857342221411936107180459584497701010060484924821821295580425746847785090904442855056641128624274011;
	weights[50] 	= 9.1327226333701743652764176684087958422958207516093705274514385023674099028750340679654e-36;

	nodes[51] 	= 85.555335173412816653711699480026081269687656238210442418227096592312591419004560886137829497253990624096989906930046793128949184;
	weights[51] 	= 2.5527289004769613608982779964168958937236252445862203206397322805299236430006426704335e-37;

	nodes[52] 	= 89.265949706707799315548010895310724651320485967203710032664427708314111746035480788369788923433833845457209478947867102539461986;
	weights[52] 	= 6.4259894643172859896865121602448566925108353738869304440893178672241878159202661252858e-39;

	nodes[53] 	= 93.08441946134063229730318969997991375009058133091304028098963045826215966427210422706516854307929537313440423554255591846599289;
	weights[53] 	= 1.4522939392269542961080362160171850565092348317542071949124342686281284440707237918456e-40;

	nodes[54] 	= 97.014135063834902684607871177720232539893977328256507088727196386193512026676135206072891573200376578061829339622483629733532316;
	weights[54] 	= 2.9369191718645183760210952780371463367316414504552688812283474635449438390433709036814e-42;

	nodes[55] 	= 101.05875569022938700590890547598026847339343568220937463283351350755297562461827372612601016603500881783696597009497811316446653;
	weights[55] 	= 5.295174816527267297616181798621042333607455081040690481519389370454501568622072645398e-44;

	nodes[56] 	= 105.22223939156018954938355209339224979611231485841542970899724534133639093624717529234534955855329208723294906239701681765632093;
	weights[56] 	= 8.47848919210631066126218136941946410978082498335649122978851057602050356674222465508e-46;

	nodes[57] 	= 109.50887812470344517081594941973662397812311372965978404313595455433832200980058862871365168470116515004652548806877901514596447;
	weights[57] 	= 1.2004985488532979711972264748831131821670092555650430981887723361719562485377254024795e-47;

	nodes[58] 	= 113.92333842313627923076313554129180417049050719930003570615738579168573702302130269662061009868149646447015142915400783992465527;
	weights[58] 	= 1.4962481755176053172169778092297175276560093316441000205413687870153290306406560842115e-49;

	nodes[59] 	= 118.4707088719476025554902230736197804744513702681703464202362764104454360334379024170658737047664874246873450671497169213379215;
	weights[59] 	= 1.6332648511950149342729363028360707204597612176711770718040478768025845077971989557618e-51;

	nodes[60] 	= 123.15655584940207610929434377165304298131595482415435968893231814651214674492055560554227624738213026306310935295003165274533887;
	weights[60] 	= 1.5528417323259293418730247527653303394623980757743527402893083371808142710880417816932e-53;

	nodes[61] 	= 127.98698938754090963666818588726154761253468188695697053429158676008596340404295607531560863973832884223513013835356825920436933;
	weights[61] 	= 1.2781687738313083170948589315958769216077817029344705334381819307689307933342656336918e-55;

	nodes[62] 	= 132.96874152060080004124635393473698256898485678598028147862431462311874551538543107774335507844967223929347502786339700644298491;
	weights[62] 	= 9.047844785125225900293394234976818049182900632176166608116159931180422231223971502149e-58;

	nodes[63] 	= 138.10926018098517098939756025330400294600330495748471525902520033174473412682253208064092611209295454030855138910277827903534832;
	weights[63] 	= 5.4675902350250144439493438955499071469640278333510445499747000200874573331205418040271e-60;

	nodes[64] 	= 143.41682263863099531505961609330120328750244155328812377620143868502633064258260748815810204771296200059087219509527782092523409;
	weights[64] 	= 2.7975798672633887198369237111726900834517767306105743417081841076807689976281141077353e-62;

	nodes[65] 	= 148.90067376492004257067981511552334100175209173498356603651824800267167682677088905352801182447306986500529421094446731815755601;
	weights[65] 	= 1.2009676359108136726712653181847832815966605884824738009569308253970858547289843433696e-64;

	nodes[66] 	= 154.57119619299863764414165119517107198577554918055217887132046325916468906668014821705553500448589214639602422251498094263119476;
	weights[66] 	= 4.2813514793722969349051679625004771166249109968232832063169194837417514701248669861719e-67;

	nodes[67] 	= 160.44012198152660448810167855120414384308124652529502955858098774023837837824555604149839342426190324871396594703651283826317598;
	weights[67] 	= 1.25282717864032878782748946880588430226520292449792214949431001178171828513853282723834e-69;

	nodes[68] 	= 166.52079904192259996520562843585284722479866667364406470334708703936486802786340134251394275360142637206762863424813119619725959;
	weights[68] 	= 2.96981701133635282749828690021750971762992809823282761959171798250834355214813070968317e-72;

	nodes[69] 	= 172.82853095713354246606535092879032803872338643023542262996795299464812528476147190535849648360076963861310274333875759041911147;
	weights[69] 	= 5.61728527653327849943992807863151248406681551929324247311216038727891459737707966363965e-75;

	nodes[70] 	= 179.38101688197522567966594988592080606614443696482171565578775899313534943041488623415118245867515166441068680050290576086856998;
	weights[70] 	= 8.33079271720561571609672274306279622551062491698605466680101254243813186590878570328611e-78;

	nodes[71] 	= 186.19893062353197378777003625130688503771539896392691178995753096277946460668347297823813652520617496022589543995173241288590076;
	weights[71] 	= 9.491653512312634976311350310138976318772867490476085558883411267300929507353128904505419e-81;

	nodes[72] 	= 193.30669763454451121122042424004262029351336382021426496489888202461127196980585565542137291431199003045327280985338413606272482;
	weights[72] 	= 8.110032330842520608678565594978224399600204406163285533428816538928507801907719618114485e-84;

	nodes[73] 	= 200.73356071797150567172388898962070644886571875132692891412009301059299642836407499132820325835432522770099660003064441152907516;
	weights[73] 	= 5.0489510920131889713058812549738498788985005722735295199272412238301249422510623634061767e-87;

	nodes[74] 	= 208.51507954647230329557032982028009262962342216885102115546397773991106751993502238030312584155297725270705278651886802550644409;
	weights[74] 	= 2.21134275243064562075601814740253010785094128567011557366282998413816698760931494054445582e-90;

	nodes[75] 	= 216.69530505233534800824884494094771841788178185299648833434833506486457538459776366918886091389213287063489412111714524984915392;
	weights[75] 	= 6.52451544328141253966178102792584247479079433852955775936870158065006073113933548146417847e-94;

	nodes[76] 	= 225.3300479792024867093987652418238057541557875195875191946880892296114897107009065470468253882655988798856408321136019833862641;
	weights[76] 	= 1.2275398667739927577825901478167456892730271131487929900650424077819721308367095810669456459e-97;

	nodes[77] 	= 234.49201248355466894738213113997179151288763882272799434500620781260399838714500097329551125904620953907736277344846125938871544;
	weights[77] 	= 1.37119859359441060061737293706409937699308806298519543972504577666347061043787653502123084673e-101;

	nodes[78] 	= 244.27931233564953318270117408201566558838391307671955863640616762547384815251494859962704269870980946126309936965342583648157138;
	weights[78] 	= 8.25949036645959146169408992801288518700655576869877019366655431147773553253078214947619340137e-106;

	nodes[79] 	= 254.830627394942167052257461297158334493413248331905240109202917531406729368252378129099841081369079479096105206209794373933601;
	weights[79] 	= 2.342346368490419511478744487659463045093712156801963706230683823289487872588845380707426488857e-110;

	nodes[80] 	= 266.3548378280119457603899907688946783532926668105881085540383570784259683725635590520691591348696947477628512674206624573956573;
	weights[80] 	= 2.55071666367620395032088547600782871989860967450323998758410655883383479096443884147340282773674e-115;

	nodes[81] 	= 279.19722826810775537832085854112624865676744282779744902987213066717427271214563414441591388593710788290452577930875432382578493;
	weights[81] 	= 7.62467724514305750554694493726617634972300463964109082542589083089403137406516724936520655273225e-121;

	nodes[82] 	= 294.02145021848716778398901644267504445903350375301180410302882037240252812399515621816011904977982283156674012970185559151983282;
	weights[82] 	= 3.2953508683871242379130585419922228574115392667984417301245459440429190317546340948514706112754619e-127;

	nodes[83] 	= 312.54532849347605188976527685293614490779520575194759669629551177542442421908954771628816148165990593606284608652850035058863641;
	weights[83] 	= 3.9959287760285110033022397908310867350149554955612731171900875756329265473158335526868004462084765361e-135;

}
#endif /*(__Gauss_Laguerre_Nodes_and_Weights_84_hpp__)*/