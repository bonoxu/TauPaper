{
//=========Macro generated from canvas: canvas1/
//=========  (Wed Oct 19 17:57:04 2016) by ROOT version5.34/05
   TCanvas *canvas1 = new TCanvas("canvas1", "",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(-0.4533333,-0.04864865,2.213333,0.2216216);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetLeftMargin(0.17);
   canvas1->SetRightMargin(0.08);
   canvas1->SetTopMargin(0.08);
   canvas1->SetBottomMargin(0.18);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
   
   TH1F *0 = new TH1F("0","",100,0,2);
   0->SetBinContent(1,0.007313814);
   0->SetBinContent(4,1.729024e-05);
   0->SetBinContent(5,0.0005878678);
   0->SetBinContent(6,0.003665546);
   0->SetBinContent(7,0.01305854);
   0->SetBinContent(8,0.03020316);
   0->SetBinContent(9,0.05272745);
   0->SetBinContent(10,0.07648994);
   0->SetBinContent(11,0.09388378);
   0->SetBinContent(12,0.1025569);
   0->SetBinContent(13,0.1012123);
   0->SetBinContent(14,0.09205922);
   0->SetBinContent(15,0.08262945);
   0->SetBinContent(16,0.06833996);
   0->SetBinContent(17,0.05722399);
   0->SetBinContent(18,0.04657497);
   0->SetBinContent(19,0.0364318);
   0->SetBinContent(20,0.02952899);
   0->SetBinContent(21,0.02374239);
   0->SetBinContent(22,0.01839659);
   0->SetBinContent(23,0.01466222);
   0->SetBinContent(24,0.01144621);
   0->SetBinContent(25,0.008848334);
   0->SetBinContent(26,0.006440651);
   0->SetBinContent(27,0.004992582);
   0->SetBinContent(28,0.003963805);
   0->SetBinContent(29,0.003099287);
   0->SetBinContent(30,0.002208833);
   0->SetBinContent(31,0.001599347);
   0->SetBinContent(32,0.001348637);
   0->SetBinContent(33,0.001037411);
   0->SetBinContent(34,0.0007348338);
   0->SetBinContent(35,0.0005792227);
   0->SetBinContent(36,0.0004754816);
   0->SetBinContent(37,0.0003069018);
   0->SetBinContent(38,0.0002636762);
   0->SetBinContent(39,0.0001901926);
   0->SetBinContent(40,0.0002074829);
   0->SetBinContent(41,0.0001512896);
   0->SetBinContent(42,0.000108064);
   0->SetBinContent(43,8.212864e-05);
   0->SetBinContent(44,7.348351e-05);
   0->SetBinContent(45,4.754815e-05);
   0->SetBinContent(46,4.322559e-05);
   0->SetBinContent(47,3.890303e-05);
   0->SetBinContent(48,6.916095e-05);
   0->SetBinContent(49,3.025791e-05);
   0->SetBinContent(50,3.458047e-05);
   0->SetBinContent(51,4.322559e-05);
   0->SetBinContent(52,2.16128e-05);
   0->SetBinContent(53,2.16128e-05);
   0->SetBinContent(54,8.645118e-06);
   0->SetBinContent(55,1.296768e-05);
   0->SetBinContent(56,1.729024e-05);
   0->SetBinContent(57,8.645118e-06);
   0->SetBinContent(58,4.322559e-06);
   0->SetBinContent(59,1.729024e-05);
   0->SetBinContent(60,4.322559e-06);
   0->SetBinContent(61,1.296768e-05);
   0->SetBinContent(62,4.322559e-06);
   0->SetBinContent(63,4.322559e-06);
   0->SetBinContent(64,4.322559e-06);
   0->SetBinContent(67,1.296768e-05);
   0->SetBinContent(70,8.645118e-06);
   0->SetBinContent(71,4.322559e-06);
   0->SetBinContent(72,4.322559e-06);
   0->SetBinContent(73,8.645118e-06);
   0->SetBinContent(75,8.645118e-06);
   0->SetBinContent(78,4.322559e-06);
   0->SetBinContent(79,4.322559e-06);
   0->SetBinContent(81,4.322559e-06);
   0->SetBinContent(82,4.322559e-06);
   0->SetBinContent(90,8.645118e-06);
   0->SetBinContent(91,4.322559e-06);
   0->SetBinContent(97,4.322559e-06);
   0->SetBinContent(100,4.322559e-06);
   0->SetBinContent(101,8.64512e-05);
   0->SetMinimum(0);
   0->SetMaximum(0.2);
   0->SetEntries(231351);
   0->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   0->SetFillColor(ci);
   0->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   0->SetLineColor(ci);
   0->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   0->GetXaxis()->SetNdivisions(506);
   0->GetXaxis()->SetLabelFont(132);
   0->GetXaxis()->SetLabelOffset(0.015);
   0->GetXaxis()->SetLabelSize(0.05);
   0->GetXaxis()->SetTitleSize(0.05);
   0->GetXaxis()->SetTitleFont(132);
   0->GetYaxis()->SetTitle("Normalised entries");
   0->GetYaxis()->SetNdivisions(506);
   0->GetYaxis()->SetLabelFont(132);
   0->GetYaxis()->SetLabelOffset(0.015);
   0->GetYaxis()->SetLabelSize(0.05);
   0->GetYaxis()->SetTitleSize(0.05);
   0->GetYaxis()->SetTitleOffset(1.3);
   0->GetYaxis()->SetTitleFont(132);
   0->GetZaxis()->SetLabelFont(132);
   0->GetZaxis()->SetLabelOffset(0.015);
   0->GetZaxis()->SetLabelSize(0.05);
   0->GetZaxis()->SetTitleSize(0.05);
   0->GetZaxis()->SetTitleOffset(1.1);
   0->GetZaxis()->SetTitleFont(132);
   0->Draw("");
   
   TH1F *1 = new TH1F("1","",100,0,2);
   1->SetBinContent(1,0.0008585909);
   1->SetBinContent(5,6.760558e-06);
   1->SetBinContent(8,6.760558e-06);
   1->SetBinContent(9,2.028168e-05);
   1->SetBinContent(10,1.352112e-05);
   1->SetBinContent(11,3.380279e-05);
   1->SetBinContent(12,4.056335e-05);
   1->SetBinContent(13,3.380279e-05);
   1->SetBinContent(14,2.028168e-05);
   1->SetBinContent(15,4.732391e-05);
   1->SetBinContent(16,1.352112e-05);
   1->SetBinContent(17,5.408447e-05);
   1->SetBinContent(18,0.0001081689);
   1->SetBinContent(19,6.760559e-05);
   1->SetBinContent(20,0.0001216901);
   1->SetBinContent(21,7.436615e-05);
   1->SetBinContent(22,9.464783e-05);
   1->SetBinContent(23,0.0001149295);
   1->SetBinContent(24,0.0001419717);
   1->SetBinContent(25,0.0001487323);
   1->SetBinContent(26,0.000229859);
   1->SetBinContent(27,0.0001757745);
   1->SetBinContent(28,0.0002230985);
   1->SetBinContent(29,0.0002366196);
   1->SetBinContent(30,0.0002907041);
   1->SetBinContent(31,0.0003988731);
   1->SetBinContent(32,0.000507042);
   1->SetBinContent(33,0.0005002815);
   1->SetBinContent(34,0.0004732392);
   1->SetBinContent(35,0.0006422532);
   1->SetBinContent(36,0.0008315489);
   1->SetBinContent(37,0.001095209);
   1->SetBinContent(38,0.00164281);
   1->SetBinContent(39,0.002034925);
   1->SetBinContent(40,0.002704226);
   1->SetBinContent(41,0.002981411);
   1->SetBinContent(42,0.003670993);
   1->SetBinContent(43,0.00486086);
   1->SetBinContent(44,0.007200032);
   1->SetBinContent(45,0.01054653);
   1->SetBinContent(46,0.02723153);
   1->SetBinContent(47,0.06894229);
   1->SetBinContent(48,0.1456052);
   1->SetBinContent(49,0.1596908);
   1->SetBinContent(50,0.2428338);
   1->SetBinContent(51,0.2668893);
   1->SetBinContent(52,0.02111337);
   1->SetBinContent(53,0.02045759);
   1->SetBinContent(54,0.001311545);
   1->SetBinContent(55,0.0002907041);
   1->SetBinContent(56,0.0001081689);
   1->SetBinContent(57,4.056335e-05);
   1->SetBinContent(58,8.788727e-05);
   1->SetBinContent(59,1.352112e-05);
   1->SetBinContent(60,2.704223e-05);
   1->SetBinContent(61,2.704223e-05);
   1->SetBinContent(62,6.084503e-05);
   1->SetBinContent(63,5.408447e-05);
   1->SetBinContent(64,3.380279e-05);
   1->SetBinContent(65,4.732391e-05);
   1->SetBinContent(66,3.380279e-05);
   1->SetBinContent(67,5.408447e-05);
   1->SetBinContent(68,2.028168e-05);
   1->SetBinContent(69,5.408447e-05);
   1->SetBinContent(70,6.084503e-05);
   1->SetBinContent(71,4.056335e-05);
   1->SetBinContent(72,5.408447e-05);
   1->SetBinContent(73,6.084503e-05);
   1->SetBinContent(74,4.732391e-05);
   1->SetBinContent(75,8.788727e-05);
   1->SetBinContent(76,3.380279e-05);
   1->SetBinContent(77,4.732391e-05);
   1->SetBinContent(78,6.760559e-05);
   1->SetBinContent(79,0.0001081689);
   1->SetBinContent(80,2.028168e-05);
   1->SetBinContent(81,4.732391e-05);
   1->SetBinContent(82,4.732391e-05);
   1->SetBinContent(83,5.408447e-05);
   1->SetBinContent(84,4.732391e-05);
   1->SetBinContent(85,5.408447e-05);
   1->SetBinContent(86,6.084503e-05);
   1->SetBinContent(87,3.380279e-05);
   1->SetBinContent(88,4.732391e-05);
   1->SetBinContent(89,6.760559e-05);
   1->SetBinContent(90,4.056335e-05);
   1->SetBinContent(91,6.760559e-05);
   1->SetBinContent(92,6.084503e-05);
   1->SetBinContent(93,5.408447e-05);
   1->SetBinContent(94,6.760559e-05);
   1->SetBinContent(95,4.732391e-05);
   1->SetBinContent(96,2.704223e-05);
   1->SetBinContent(97,8.788727e-05);
   1->SetBinContent(98,5.408447e-05);
   1->SetBinContent(99,4.056335e-05);
   1->SetBinContent(100,6.760559e-05);
   1->SetBinContent(101,0.5394514);
   1->SetMinimum(0);
   1->SetMaximum(0.2);
   1->SetEntries(227791);
   1->SetStats(0);

   ci = TColor::GetColor("#e1974c");
   1->SetFillColor(ci);
   1->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   1->SetLineColor(ci);
   1->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   1->GetXaxis()->SetNdivisions(506);
   1->GetXaxis()->SetLabelFont(132);
   1->GetXaxis()->SetLabelOffset(0.015);
   1->GetXaxis()->SetLabelSize(0.05);
   1->GetXaxis()->SetTitleSize(0.05);
   1->GetXaxis()->SetTitleFont(132);
   1->GetYaxis()->SetTitle("Normalised entries");
   1->GetYaxis()->SetNdivisions(506);
   1->GetYaxis()->SetLabelFont(132);
   1->GetYaxis()->SetLabelOffset(0.015);
   1->GetYaxis()->SetLabelSize(0.05);
   1->GetYaxis()->SetTitleSize(0.05);
   1->GetYaxis()->SetTitleOffset(1.3);
   1->GetYaxis()->SetTitleFont(132);
   1->GetZaxis()->SetLabelFont(132);
   1->GetZaxis()->SetLabelOffset(0.015);
   1->GetZaxis()->SetLabelSize(0.05);
   1->GetZaxis()->SetTitleSize(0.05);
   1->GetZaxis()->SetTitleOffset(1.1);
   1->GetZaxis()->SetTitleFont(132);
   1->Draw("same");
   
   TH1F *2 = new TH1F("2","",100,0,2);
   2->SetBinContent(1,0.002562857);
   2->SetBinContent(4,7.343399e-06);
   2->SetBinContent(5,0.0001321812);
   2->SetBinContent(6,0.0003304528);
   2->SetBinContent(7,0.001028075);
   2->SetBinContent(8,0.001564147);
   2->SetBinContent(9,0.003018151);
   2->SetBinContent(10,0.004016861);
   2->SetBinContent(11,0.005595654);
   2->SetBinContent(12,0.006307946);
   2->SetBinContent(13,0.007703156);
   2->SetBinContent(14,0.008775264);
   2->SetBinContent(15,0.009318662);
   2->SetBinContent(16,0.01006767);
   2->SetBinContent(17,0.01086808);
   2->SetBinContent(18,0.01128664);
   2->SetBinContent(19,0.01117649);
   2->SetBinContent(20,0.01175661);
   2->SetBinContent(21,0.0119769);
   2->SetBinContent(22,0.01282872);
   2->SetBinContent(23,0.01277731);
   2->SetBinContent(24,0.01302698);
   2->SetBinContent(25,0.01307104);
   2->SetBinContent(26,0.01327665);
   2->SetBinContent(27,0.01341617);
   2->SetBinContent(28,0.01367319);
   2->SetBinContent(29,0.01315916);
   2->SetBinContent(30,0.0136071);
   2->SetBinContent(31,0.01493622);
   2->SetBinContent(32,0.01412846);
   2->SetBinContent(33,0.01418721);
   2->SetBinContent(34,0.01522995);
   2->SetBinContent(35,0.0148995);
   2->SetBinContent(36,0.0150684);
   2->SetBinContent(37,0.01460577);
   2->SetBinContent(38,0.01587615);
   2->SetBinContent(39,0.01568522);
   2->SetBinContent(40,0.0154943);
   2->SetBinContent(41,0.01599364);
   2->SetBinContent(42,0.01499496);
   2->SetBinContent(43,0.01534009);
   2->SetBinContent(44,0.01468655);
   2->SetBinContent(45,0.0156632);
   2->SetBinContent(46,0.01811583);
   2->SetBinContent(47,0.02810994);
   2->SetBinContent(48,0.06065505);
   2->SetBinContent(49,0.1134709);
   2->SetBinContent(50,0.1409638);
   2->SetBinContent(51,0.02161854);
   2->SetBinContent(52,0.01663984);
   2->SetBinContent(53,0.007431457);
   2->SetBinContent(54,0.006359348);
   2->SetBinContent(55,0.005999531);
   2->SetBinContent(56,0.005845323);
   2->SetBinContent(57,0.005368015);
   2->SetBinContent(58,0.005257867);
   2->SetBinContent(59,0.00503757);
   2->SetBinContent(60,0.004567605);
   2->SetBinContent(61,0.00448683);
   2->SetBinContent(62,0.004171072);
   2->SetBinContent(63,0.004339966);
   2->SetBinContent(64,0.00373781);
   2->SetBinContent(65,0.003892022);
   2->SetBinContent(66,0.003370637);
   2->SetBinContent(67,0.003532193);
   2->SetBinContent(68,0.003231111);
   2->SetBinContent(69,0.002966747);
   2->SetBinContent(70,0.003444072);
   2->SetBinContent(71,0.002966747);
   2->SetBinContent(72,0.003003464);
   2->SetBinContent(73,0.002518796);
   2->SetBinContent(74,0.002489422);
   2->SetBinContent(75,0.002496766);
   2->SetBinContent(76,0.002783161);
   2->SetBinContent(77,0.002188341);
   2->SetBinContent(78,0.00231318);
   2->SetBinContent(79,0.002203028);
   2->SetBinContent(80,0.002100219);
   2->SetBinContent(81,0.00169633);
   2->SetBinContent(82,0.001762421);
   2->SetBinContent(83,0.00174039);
   2->SetBinContent(84,0.001688986);
   2->SetBinContent(85,0.001894603);
   2->SetBinContent(86,0.001703673);
   2->SetBinContent(87,0.001733047);
   2->SetBinContent(88,0.001666956);
   2->SetBinContent(89,0.001571491);
   2->SetBinContent(90,0.001365874);
   2->SetBinContent(91,0.001299783);
   2->SetBinContent(92,0.001358531);
   2->SetBinContent(93,0.001476026);
   2->SetBinContent(94,0.001387905);
   2->SetBinContent(95,0.001343844);
   2->SetBinContent(96,0.001167601);
   2->SetBinContent(97,0.001079479);
   2->SetBinContent(98,0.001196975);
   2->SetBinContent(99,0.001094166);
   2->SetBinContent(100,0.0009766715);
   2->SetBinContent(101,0.1072846);
   2->SetMinimum(0);
   2->SetMaximum(0.2);
   2->SetEntries(150777);
   2->SetStats(0);

   ci = TColor::GetColor("#83ba5b");
   2->SetFillColor(ci);
   2->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   2->SetLineColor(ci);
   2->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   2->GetXaxis()->SetNdivisions(506);
   2->GetXaxis()->SetLabelFont(132);
   2->GetXaxis()->SetLabelOffset(0.015);
   2->GetXaxis()->SetLabelSize(0.05);
   2->GetXaxis()->SetTitleSize(0.05);
   2->GetXaxis()->SetTitleFont(132);
   2->GetYaxis()->SetTitle("Normalised entries");
   2->GetYaxis()->SetNdivisions(506);
   2->GetYaxis()->SetLabelFont(132);
   2->GetYaxis()->SetLabelOffset(0.015);
   2->GetYaxis()->SetLabelSize(0.05);
   2->GetYaxis()->SetTitleSize(0.05);
   2->GetYaxis()->SetTitleOffset(1.3);
   2->GetYaxis()->SetTitleFont(132);
   2->GetZaxis()->SetLabelFont(132);
   2->GetZaxis()->SetLabelOffset(0.015);
   2->GetZaxis()->SetLabelSize(0.05);
   2->GetZaxis()->SetTitleSize(0.05);
   2->GetZaxis()->SetTitleOffset(1.1);
   2->GetZaxis()->SetTitleFont(132);
   2->Draw("same");
   
   TH1F *3 = new TH1F("3","",100,0,2);
   3->SetBinContent(1,0.01504151);
   3->SetBinContent(2,1.114787e-05);
   3->SetBinContent(3,2.601169e-05);
   3->SetBinContent(4,3.715957e-06);
   3->SetBinContent(5,6.317127e-05);
   3->SetBinContent(6,0.0001672181);
   3->SetBinContent(7,0.0005388129);
   3->SetBinContent(8,0.0009475706);
   3->SetBinContent(9,0.001627596);
   3->SetBinContent(10,0.002378225);
   3->SetBinContent(11,0.003266345);
   3->SetBinContent(12,0.004723011);
   3->SetBinContent(13,0.005696533);
   3->SetBinContent(14,0.006406231);
   3->SetBinContent(15,0.007286851);
   3->SetBinContent(16,0.008516747);
   3->SetBinContent(17,0.009081532);
   3->SetBinContent(18,0.009735495);
   3->SetBinContent(19,0.01008477);
   3->SetBinContent(20,0.01084649);
   3->SetBinContent(21,0.01146329);
   3->SetBinContent(22,0.01183486);
   3->SetBinContent(23,0.01227332);
   3->SetBinContent(24,0.01330256);
   3->SetBinContent(25,0.01302017);
   3->SetBinContent(26,0.01370386);
   3->SetBinContent(27,0.01370757);
   3->SetBinContent(28,0.01453617);
   3->SetBinContent(29,0.01492632);
   3->SetBinContent(30,0.01535734);
   3->SetBinContent(31,0.01508238);
   3->SetBinContent(32,0.01592213);
   3->SetBinContent(33,0.01528303);
   3->SetBinContent(34,0.01623425);
   3->SetBinContent(35,0.01598901);
   3->SetBinContent(36,0.01623796);
   3->SetBinContent(37,0.01650549);
   3->SetBinContent(38,0.01642746);
   3->SetBinContent(39,0.01637916);
   3->SetBinContent(40,0.01615622);
   3->SetBinContent(41,0.01684734);
   3->SetBinContent(42,0.01602989);
   3->SetBinContent(43,0.01640517);
   3->SetBinContent(44,0.0157958);
   3->SetBinContent(45,0.01724863);
   3->SetBinContent(46,0.01928112);
   3->SetBinContent(47,0.02869216);
   3->SetBinContent(48,0.05178426);
   3->SetBinContent(49,0.07813612);
   3->SetBinContent(50,0.1240045);
   3->SetBinContent(51,0.04219331);
   3->SetBinContent(52,0.01783943);
   3->SetBinContent(53,0.0108725);
   3->SetBinContent(54,0.00778847);
   3->SetBinContent(55,0.007271988);
   3->SetBinContent(56,0.006926428);
   3->SetBinContent(57,0.006644035);
   3->SetBinContent(58,0.006495407);
   3->SetBinContent(59,0.005860023);
   3->SetBinContent(60,0.005711396);
   3->SetBinContent(61,0.005503316);
   3->SetBinContent(62,0.005313816);
   3->SetBinContent(63,0.004801047);
   3->SetBinContent(64,0.004968256);
   3->SetBinContent(65,0.004310537);
   3->SetBinContent(66,0.004451744);
   3->SetBinContent(67,0.004161898);
   3->SetBinContent(68,0.004005826);
   3->SetBinContent(69,0.003808879);
   3->SetBinContent(70,0.00366024);
   3->SetBinContent(71,0.003463292);
   3->SetBinContent(72,0.003385257);
   3->SetBinContent(73,0.003069398);
   3->SetBinContent(74,0.003288641);
   3->SetBinContent(75,0.002872451);
   3->SetBinContent(76,0.002846439);
   3->SetBinContent(77,0.002590036);
   3->SetBinContent(78,0.002467408);
   3->SetBinContent(79,0.002564024);
   3->SetBinContent(80,0.002411669);
   3->SetBinContent(81,0.002311337);
   3->SetBinContent(82,0.002244449);
   3->SetBinContent(83,0.002073514);
   3->SetBinContent(84,0.00209581);
   3->SetBinContent(85,0.001958319);
   3->SetBinContent(86,0.001913727);
   3->SetBinContent(87,0.001716779);
   3->SetBinContent(88,0.001887715);
   3->SetBinContent(89,0.00166104);
   3->SetBinContent(90,0.001913727);
   3->SetBinContent(91,0.001460377);
   3->SetBinContent(92,0.001538412);
   3->SetBinContent(93,0.001564424);
   3->SetBinContent(94,0.001430649);
   3->SetBinContent(95,0.001467808);
   3->SetBinContent(96,0.001211405);
   3->SetBinContent(97,0.001293157);
   3->SetBinContent(98,0.001278293);
   3->SetBinContent(99,0.001192826);
   3->SetBinContent(100,0.001222554);
   3->SetBinContent(101,0.1512957);
   3->SetMinimum(0);
   3->SetMaximum(0.2);
   3->SetEntries(309811);
   3->SetStats(0);

   ci = TColor::GetColor("#d35e60");
   3->SetFillColor(ci);
   3->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   3->SetLineColor(ci);
   3->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   3->GetXaxis()->SetNdivisions(506);
   3->GetXaxis()->SetLabelFont(132);
   3->GetXaxis()->SetLabelOffset(0.015);
   3->GetXaxis()->SetLabelSize(0.05);
   3->GetXaxis()->SetTitleSize(0.05);
   3->GetXaxis()->SetTitleFont(132);
   3->GetYaxis()->SetTitle("Normalised entries");
   3->GetYaxis()->SetNdivisions(506);
   3->GetYaxis()->SetLabelFont(132);
   3->GetYaxis()->SetLabelOffset(0.015);
   3->GetYaxis()->SetLabelSize(0.05);
   3->GetYaxis()->SetTitleSize(0.05);
   3->GetYaxis()->SetTitleOffset(1.3);
   3->GetYaxis()->SetTitleFont(132);
   3->GetZaxis()->SetLabelFont(132);
   3->GetZaxis()->SetLabelOffset(0.015);
   3->GetZaxis()->SetLabelSize(0.05);
   3->GetZaxis()->SetTitleSize(0.05);
   3->GetZaxis()->SetTitleOffset(1.1);
   3->GetZaxis()->SetTitleFont(132);
   3->Draw("same");
   
   TH1F *4 = new TH1F("4","",100,0,2);
   4->SetBinContent(1,0.01541156);
   4->SetBinContent(2,1.298374e-05);
   4->SetBinContent(3,1.298374e-05);
   4->SetBinContent(4,3.895121e-05);
   4->SetBinContent(5,5.193494e-05);
   4->SetBinContent(6,0.0001168536);
   4->SetBinContent(7,0.0002856421);
   4->SetBinContent(8,0.0005583005);
   4->SetBinContent(9,0.001480146);
   4->SetBinContent(10,0.002129331);
   4->SetBinContent(11,0.003388761);
   4->SetBinContent(12,0.004557306);
   4->SetBinContent(13,0.00547914);
   4->SetBinContent(14,0.006530808);
   4->SetBinContent(15,0.007283855);
   4->SetBinContent(16,0.008686079);
   4->SetBinContent(17,0.008776964);
   4->SetBinContent(18,0.009413159);
   4->SetBinContent(19,0.01082837);
   4->SetBinContent(20,0.0115944);
   4->SetBinContent(21,0.012698);
   4->SetBinContent(22,0.01202285);
   4->SetBinContent(23,0.01294469);
   4->SetBinContent(24,0.01345105);
   4->SetBinContent(25,0.01455465);
   4->SetBinContent(26,0.0138016);
   4->SetBinContent(27,0.01404829);
   4->SetBinContent(28,0.01504802);
   4->SetBinContent(29,0.01582704);
   4->SetBinContent(30,0.01545051);
   4->SetBinContent(31,0.01556737);
   4->SetBinContent(32,0.01547648);
   4->SetBinContent(33,0.01551543);
   4->SetBinContent(34,0.01578809);
   4->SetBinContent(35,0.0164113);
   4->SetBinContent(36,0.01552841);
   4->SetBinContent(37,0.01706048);
   4->SetBinContent(38,0.01604776);
   4->SetBinContent(39,0.01660605);
   4->SetBinContent(40,0.01667097);
   4->SetBinContent(41,0.01615163);
   4->SetBinContent(42,0.01646323);
   4->SetBinContent(43,0.01567123);
   4->SetBinContent(44,0.01607372);
   4->SetBinContent(45,0.01654113);
   4->SetBinContent(46,0.0192288);
   4->SetBinContent(47,0.02807135);
   4->SetBinContent(48,0.0465615);
   4->SetBinContent(49,0.07123235);
   4->SetBinContent(50,0.1284632);
   4->SetBinContent(51,0.04401651);
   4->SetBinContent(52,0.01698257);
   4->SetBinContent(53,0.01116594);
   4->SetBinContent(54,0.007660378);
   4->SetBinContent(55,0.007647394);
   4->SetBinContent(56,0.006582743);
   4->SetBinContent(57,0.006387989);
   4->SetBinContent(58,0.006478874);
   4->SetBinContent(59,0.005777762);
   4->SetBinContent(60,0.005790745);
   4->SetBinContent(61,0.005855663);
   4->SetBinContent(62,0.005531074);
   4->SetBinContent(63,0.005544058);
   4->SetBinContent(64,0.004959797);
   4->SetBinContent(65,0.004648192);
   4->SetBinContent(66,0.004765044);
   4->SetBinContent(67,0.004128839);
   4->SetBinContent(68,0.004128839);
   4->SetBinContent(69,0.003401745);
   4->SetBinContent(70,0.003700373);
   4->SetBinContent(71,0.003713357);
   4->SetBinContent(72,0.00318102);
   4->SetBinContent(73,0.003168036);
   4->SetBinContent(74,0.003168036);
   4->SetBinContent(75,0.002752553);
   4->SetBinContent(76,0.002934327);
   4->SetBinContent(77,0.002895375);
   4->SetBinContent(78,0.002726585);
   4->SetBinContent(79,0.002726585);
   4->SetBinContent(80,0.00233707);
   4->SetBinContent(81,0.00209038);
   4->SetBinContent(82,0.001999494);
   4->SetBinContent(83,0.002207233);
   4->SetBinContent(84,0.002077396);
   4->SetBinContent(85,0.002207233);
   4->SetBinContent(86,0.001973526);
   4->SetBinContent(87,0.002077396);
   4->SetBinContent(88,0.001454179);
   4->SetBinContent(89,0.001584016);
   4->SetBinContent(90,0.001622967);
   4->SetBinContent(91,0.001571032);
   4->SetBinContent(92,0.001415227);
   4->SetBinContent(93,0.001545064);
   4->SetBinContent(94,0.001519097);
   4->SetBinContent(95,0.001596999);
   4->SetBinContent(96,0.001298374);
   4->SetBinContent(97,0.001207488);
   4->SetBinContent(98,0.001207488);
   4->SetBinContent(99,0.00149313);
   4->SetBinContent(100,0.001480146);
   4->SetBinContent(101,0.1631724);
   4->SetMinimum(0);
   4->SetMaximum(0.2);
   4->SetEntries(89589);
   4->SetStats(0);

   ci = TColor::GetColor("#808585");
   4->SetFillColor(ci);
   4->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   4->SetLineColor(ci);
   4->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   4->GetXaxis()->SetNdivisions(506);
   4->GetXaxis()->SetLabelFont(132);
   4->GetXaxis()->SetLabelOffset(0.015);
   4->GetXaxis()->SetLabelSize(0.05);
   4->GetXaxis()->SetTitleSize(0.05);
   4->GetXaxis()->SetTitleFont(132);
   4->GetYaxis()->SetTitle("Normalised entries");
   4->GetYaxis()->SetNdivisions(506);
   4->GetYaxis()->SetLabelFont(132);
   4->GetYaxis()->SetLabelOffset(0.015);
   4->GetYaxis()->SetLabelSize(0.05);
   4->GetYaxis()->SetTitleSize(0.05);
   4->GetYaxis()->SetTitleOffset(1.3);
   4->GetYaxis()->SetTitleFont(132);
   4->GetZaxis()->SetLabelFont(132);
   4->GetZaxis()->SetLabelOffset(0.015);
   4->GetZaxis()->SetLabelSize(0.05);
   4->GetZaxis()->SetTitleSize(0.05);
   4->GetZaxis()->SetTitleOffset(1.1);
   4->GetZaxis()->SetTitleFont(132);
   4->Draw("same");
   
   TH1F *5 = new TH1F("5","",100,0,2);
   5->SetBinContent(1,0.0004804403);
   5->SetBinContent(7,9.064916e-06);
   5->SetBinContent(9,3.625966e-05);
   5->SetBinContent(10,5.438949e-05);
   5->SetBinContent(11,0.0001631685);
   5->SetBinContent(12,0.0002900772);
   5->SetBinContent(13,0.000308207);
   5->SetBinContent(14,0.000707063);
   5->SetBinContent(15,0.00105153);
   5->SetBinContent(16,0.001377867);
   5->SetBinContent(17,0.001649817);
   5->SetBinContent(18,0.002257171);
   5->SetBinContent(19,0.00272855);
   5->SetBinContent(20,0.003480943);
   5->SetBinContent(21,0.004024842);
   5->SetBinContent(22,0.004994796);
   5->SetBinContent(23,0.006019107);
   5->SetBinContent(24,0.006381695);
   5->SetBinContent(25,0.007260969);
   5->SetBinContent(26,0.009001387);
   5->SetBinContent(27,0.008765706);
   5->SetBinContent(28,0.01043361);
   5->SetBinContent(29,0.01146698);
   5->SetBinContent(30,0.01298985);
   5->SetBinContent(31,0.01300798);
   5->SetBinContent(32,0.01557328);
   5->SetBinContent(33,0.01589961);
   5->SetBinContent(34,0.01748593);
   5->SetBinContent(35,0.01972491);
   5->SetBinContent(36,0.02040476);
   5->SetBinContent(37,0.02082174);
   5->SetBinContent(38,0.02285222);
   5->SetBinContent(39,0.02537221);
   5->SetBinContent(40,0.02578918);
   5->SetBinContent(41,0.02772902);
   5->SetBinContent(42,0.02886211);
   5->SetBinContent(43,0.03080195);
   5->SetBinContent(44,0.03331287);
   5->SetBinContent(45,0.03388394);
   5->SetBinContent(46,0.03686622);
   5->SetBinContent(47,0.03918678);
   5->SetBinContent(48,0.04661076);
   5->SetBinContent(49,0.05082583);
   5->SetBinContent(50,0.04456214);
   5->SetBinContent(51,0.02668658);
   5->SetBinContent(52,0.02074922);
   5->SetBinContent(53,0.01800262);
   5->SetBinContent(54,0.01647975);
   5->SetBinContent(55,0.01488437);
   5->SetBinContent(56,0.01370596);
   5->SetBinContent(57,0.01223748);
   5->SetBinContent(58,0.01124943);
   5->SetBinContent(59,0.01044267);
   5->SetBinContent(60,0.01072368);
   5->SetBinContent(61,0.00937304);
   5->SetBinContent(62,0.00906484);
   5->SetBinContent(63,0.008901676);
   5->SetBinContent(64,0.00852096);
   5->SetBinContent(65,0.007324421);
   5->SetBinContent(66,0.007152192);
   5->SetBinContent(67,0.006771476);
   5->SetBinContent(68,0.006318242);
   5->SetBinContent(69,0.005783426);
   5->SetBinContent(70,0.005783426);
   5->SetBinContent(71,0.005819684);
   5->SetBinContent(72,0.004931341);
   5->SetBinContent(73,0.005157962);
   5->SetBinContent(74,0.004777236);
   5->SetBinContent(75,0.004867886);
   5->SetBinContent(76,0.004469026);
   5->SetBinContent(77,0.004423702);
   5->SetBinContent(78,0.004305857);
   5->SetBinContent(79,0.003961388);
   5->SetBinContent(80,0.003761958);
   5->SetBinContent(81,0.003798218);
   5->SetBinContent(82,0.003625983);
   5->SetBinContent(83,0.003326839);
   5->SetBinContent(84,0.003607853);
   5->SetBinContent(85,0.003218059);
   5->SetBinContent(86,0.003163669);
   5->SetBinContent(87,0.003480943);
   5->SetBinContent(88,0.003208994);
   5->SetBinContent(89,0.002918914);
   5->SetBinContent(90,0.002900784);
   5->SetBinContent(91,0.00271042);
   5->SetBinContent(92,0.00261977);
   5->SetBinContent(93,0.002737615);
   5->SetBinContent(94,0.002465665);
   5->SetBinContent(95,0.00265603);
   5->SetBinContent(96,0.002248106);
   5->SetBinContent(97,0.002520055);
   5->SetBinContent(98,0.00232969);
   5->SetBinContent(99,0.002338755);
   5->SetBinContent(100,0.001985221);
   5->SetBinContent(101,0.258828);
   5->SetMinimum(0);
   5->SetMaximum(0.2);
   5->SetEntries(138860);
   5->SetStats(0);

   ci = TColor::GetColor("#9067a7");
   5->SetFillColor(ci);
   5->SetFillStyle(3006);

   ci = TColor::GetColor("#9067a7");
   5->SetLineColor(ci);
   5->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   5->GetXaxis()->SetNdivisions(506);
   5->GetXaxis()->SetLabelFont(132);
   5->GetXaxis()->SetLabelOffset(0.015);
   5->GetXaxis()->SetLabelSize(0.05);
   5->GetXaxis()->SetTitleSize(0.05);
   5->GetXaxis()->SetTitleFont(132);
   5->GetYaxis()->SetTitle("Normalised entries");
   5->GetYaxis()->SetNdivisions(506);
   5->GetYaxis()->SetLabelFont(132);
   5->GetYaxis()->SetLabelOffset(0.015);
   5->GetYaxis()->SetLabelSize(0.05);
   5->GetYaxis()->SetTitleSize(0.05);
   5->GetYaxis()->SetTitleOffset(1.3);
   5->GetYaxis()->SetTitleFont(132);
   5->GetZaxis()->SetLabelFont(132);
   5->GetZaxis()->SetLabelOffset(0.015);
   5->GetZaxis()->SetLabelSize(0.05);
   5->GetZaxis()->SetTitleSize(0.05);
   5->GetZaxis()->SetTitleOffset(1.1);
   5->GetZaxis()->SetTitleFont(132);
   5->Draw("same");
   
   TH1F *6 = new TH1F("6","",100,0,2);
   6->SetBinContent(1,0.0004986267);
   6->SetBinContent(10,7.4794e-05);
   6->SetBinContent(11,2.493133e-05);
   6->SetBinContent(12,0.0001745193);
   6->SetBinContent(13,0.0001745193);
   6->SetBinContent(14,0.0003989013);
   6->SetBinContent(15,0.0008725969);
   6->SetBinContent(16,0.001246568);
   6->SetBinContent(17,0.001271499);
   6->SetBinContent(18,0.001869852);
   6->SetBinContent(19,0.002243822);
   6->SetBinContent(20,0.003241073);
   6->SetBinContent(21,0.003565179);
   6->SetBinContent(22,0.004587359);
   6->SetBinContent(23,0.005759127);
   6->SetBinContent(24,0.007180206);
   6->SetBinContent(25,0.007579105);
   6->SetBinContent(26,0.008376904);
   6->SetBinContent(27,0.009424016);
   6->SetBinContent(28,0.01084509);
   6->SetBinContent(29,0.01099468);
   6->SetBinContent(30,0.01266507);
   6->SetBinContent(31,0.0131637);
   6->SetBinContent(32,0.0151582);
   6->SetBinContent(33,0.01510833);
   6->SetBinContent(34,0.01620531);
   6->SetBinContent(35,0.01822474);
   6->SetBinContent(36,0.02011951);
   6->SetBinContent(37,0.02178996);
   6->SetBinContent(38,0.02238834);
   6->SetBinContent(39,0.02413361);
   6->SetBinContent(40,0.02620301);
   6->SetBinContent(41,0.02772388);
   6->SetBinContent(42,0.0282724);
   6->SetBinContent(43,0.03036672);
   6->SetBinContent(44,0.03228652);
   6->SetBinContent(45,0.03482963);
   6->SetBinContent(46,0.03652504);
   6->SetBinContent(47,0.04081342);
   6->SetBinContent(48,0.0450266);
   6->SetBinContent(49,0.04943921);
   6->SetBinContent(50,0.04397954);
   6->SetBinContent(51,0.0283472);
   6->SetBinContent(52,0.02104199);
   6->SetBinContent(53,0.01844912);
   6->SetBinContent(54,0.0170779);
   6->SetBinContent(55,0.01465957);
   6->SetBinContent(56,0.01363739);
   6->SetBinContent(57,0.01318863);
   6->SetBinContent(58,0.011967);
   6->SetBinContent(59,0.01047113);
   6->SetBinContent(60,0.01111934);
   6->SetBinContent(61,0.01057085);
   6->SetBinContent(62,0.008975253);
   6->SetBinContent(63,0.008725941);
   6->SetBinContent(64,0.007928142);
   6->SetBinContent(65,0.0068561);
   6->SetBinContent(66,0.007728693);
   6->SetBinContent(67,0.007155275);
   6->SetBinContent(68,0.006631719);
   6->SetBinContent(69,0.006731444);
   6->SetBinContent(70,0.006182957);
   6->SetBinContent(71,0.005684332);
   6->SetBinContent(72,0.005285433);
   6->SetBinContent(73,0.004662153);
   6->SetBinContent(74,0.004911465);
   6->SetBinContent(75,0.004387909);
   6->SetBinContent(76,0.004362978);
   6->SetBinContent(77,0.004437772);
   6->SetBinContent(78,0.004063803);
   6->SetBinContent(79,0.004362978);
   6->SetBinContent(80,0.003889285);
   6->SetBinContent(81,0.004587359);
   6->SetBinContent(82,0.004238322);
   6->SetBinContent(83,0.004238322);
   6->SetBinContent(84,0.003465454);
   6->SetBinContent(85,0.003241073);
   6->SetBinContent(86,0.003490385);
   6->SetBinContent(87,0.002817242);
   6->SetBinContent(88,0.002941899);
   6->SetBinContent(89,0.00359011);
   6->SetBinContent(90,0.003041623);
   6->SetBinContent(91,0.003241073);
   6->SetBinContent(92,0.002642724);
   6->SetBinContent(93,0.002617793);
   6->SetBinContent(94,0.002493136);
   6->SetBinContent(95,0.002518068);
   6->SetBinContent(96,0.002916967);
   6->SetBinContent(97,0.002368479);
   6->SetBinContent(98,0.002518068);
   6->SetBinContent(99,0.002293685);
   6->SetBinContent(100,0.002418342);
   6->SetBinContent(101,0.3005342);
   6->SetMinimum(0);
   6->SetMaximum(0.2);
   6->SetEntries(52165);
   6->SetStats(0);

   ci = TColor::GetColor("#ab6857");
   6->SetFillColor(ci);
   6->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   6->SetLineColor(ci);
   6->GetXaxis()->SetTitle("Longitudinal shower discrepency");
   6->GetXaxis()->SetNdivisions(506);
   6->GetXaxis()->SetLabelFont(132);
   6->GetXaxis()->SetLabelOffset(0.015);
   6->GetXaxis()->SetLabelSize(0.05);
   6->GetXaxis()->SetTitleSize(0.05);
   6->GetXaxis()->SetTitleFont(132);
   6->GetYaxis()->SetTitle("Normalised entries");
   6->GetYaxis()->SetNdivisions(506);
   6->GetYaxis()->SetLabelFont(132);
   6->GetYaxis()->SetLabelOffset(0.015);
   6->GetYaxis()->SetLabelSize(0.05);
   6->GetYaxis()->SetTitleSize(0.05);
   6->GetYaxis()->SetTitleOffset(1.3);
   6->GetYaxis()->SetTitleFont(132);
   6->GetZaxis()->SetLabelFont(132);
   6->GetZaxis()->SetLabelOffset(0.015);
   6->GetZaxis()->SetLabelSize(0.05);
   6->GetZaxis()->SetTitleSize(0.05);
   6->GetZaxis()->SetTitleOffset(1.1);
   6->GetZaxis()->SetTitleFont(132);
   6->Draw("same");
   
   TLegend *leg = new TLegend(0.65,0.6,0.98,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);

   ci = TColor::GetColor("#616161");
   leg->SetTextColor(ci);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(10);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("0","e^{-}","f");

   ci = TColor::GetColor("#7293cb");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#7293cb");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("1","#mu^{-}","f");

   ci = TColor::GetColor("#e1974c");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);

   ci = TColor::GetColor("#e1974c");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("2","#pi^{-}","f");

   ci = TColor::GetColor("#83ba5b");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3003);

   ci = TColor::GetColor("#83ba5b");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("3","#pi^{-}#pi^{0}","f");

   ci = TColor::GetColor("#d35e60");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#d35e60");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("4","#pi^{-}#pi^{0}#pi^{0}","f");

   ci = TColor::GetColor("#808585");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#808585");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("5","#pi^{-}#pi^{+}#pi^{-}","f");

   ci = TColor::GetColor("#9067a7");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3006);

   ci = TColor::GetColor("#9067a7");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("6","#pi^{-}#pi^{+}#pi^{-}#pi^{0}","f");

   ci = TColor::GetColor("#ab6857");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3007);

   ci = TColor::GetColor("#ab6857");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
