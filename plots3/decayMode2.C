{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Mar 21 19:51:11 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "c1",12,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-2.088667,0.627027,22.84467,1.032432);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.94367);
   gre->SetPointError(0,0,0.00113);
   gre->SetPoint(1,5,0.94022);
   gre->SetPointError(1,0,0.00127);
   gre->SetPoint(2,7,0.93897);
   gre->SetPointError(2,0,0.00106);
   gre->SetPoint(3,10,0.93617);
   gre->SetPointError(3,0,0.00147);
   gre->SetPoint(4,15,0.93049);
   gre->SetPointError(4,0,0.00135);
   gre->SetPoint(5,20,0.92193);
   gre->SetPointError(5,0,0.0016);
   
   TH1F *Graph_Graph89 = new TH1F("Graph_Graph89","Graph",100,1.3,21.7);
   Graph_Graph89->SetMinimum(0.917883);
   Graph_Graph89->SetMaximum(0.947247);
   Graph_Graph89->SetDirectory(0);
   Graph_Graph89->SetStats(0);
   Graph_Graph89->SetLineWidth(2);
   Graph_Graph89->SetMarkerSize(1.2);
   Graph_Graph89->GetXaxis()->SetNdivisions(506);
   Graph_Graph89->GetXaxis()->SetLabelFont(132);
   Graph_Graph89->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph89->GetXaxis()->SetTitleFont(132);
   Graph_Graph89->GetYaxis()->SetNdivisions(506);
   Graph_Graph89->GetYaxis()->SetLabelFont(132);
   Graph_Graph89->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph89->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph89->GetYaxis()->SetTitleFont(132);
   Graph_Graph89->GetZaxis()->SetLabelFont(132);
   Graph_Graph89->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph89->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph89->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph89->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph89->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph89);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.94824);
   gre->SetPointError(0,0,0.00114);
   gre->SetPoint(1,5,0.94617);
   gre->SetPointError(1,0,0.00115);
   gre->SetPoint(2,7,0.94297);
   gre->SetPointError(2,0,0.00174);
   gre->SetPoint(3,10,0.93816);
   gre->SetPointError(3,0,0.00223);
   gre->SetPoint(4,15,0.92514);
   gre->SetPointError(4,0,0.00246);
   gre->SetPoint(5,20,0.89845);
   gre->SetPointError(5,0,0.00171);
   
   TH1F *Graph_Graph90 = new TH1F("Graph_Graph90","Graph",100,1.3,21.7);
   Graph_Graph90->SetMinimum(0.891476);
   Graph_Graph90->SetMaximum(0.954644);
   Graph_Graph90->SetDirectory(0);
   Graph_Graph90->SetStats(0);
   Graph_Graph90->SetLineWidth(2);
   Graph_Graph90->SetMarkerSize(1.2);
   Graph_Graph90->GetXaxis()->SetNdivisions(506);
   Graph_Graph90->GetXaxis()->SetLabelFont(132);
   Graph_Graph90->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph90->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph90->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph90->GetXaxis()->SetTitleFont(132);
   Graph_Graph90->GetYaxis()->SetNdivisions(506);
   Graph_Graph90->GetYaxis()->SetLabelFont(132);
   Graph_Graph90->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph90->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph90->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph90->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph90->GetYaxis()->SetTitleFont(132);
   Graph_Graph90->GetZaxis()->SetLabelFont(132);
   Graph_Graph90->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph90->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph90->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph90->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph90->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph90);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.93607);
   gre->SetPointError(0,0,0.00161);
   gre->SetPoint(1,5,0.93446);
   gre->SetPointError(1,0,0.0018);
   gre->SetPoint(2,7,0.92923);
   gre->SetPointError(2,0,0.00267);
   gre->SetPoint(3,10,0.91594);
   gre->SetPointError(3,0,0.00198);
   gre->SetPoint(4,15,0.8927);
   gre->SetPointError(4,0,0.00309);
   gre->SetPoint(5,20,0.85026);
   gre->SetPointError(5,0,0.00309);
   
   TH1F *Graph_Graph91 = new TH1F("Graph_Graph91","Graph",100,1.3,21.7);
   Graph_Graph91->SetMinimum(0.838119);
   Graph_Graph91->SetMaximum(0.946731);
   Graph_Graph91->SetDirectory(0);
   Graph_Graph91->SetStats(0);
   Graph_Graph91->SetLineWidth(2);
   Graph_Graph91->SetMarkerSize(1.2);
   Graph_Graph91->GetXaxis()->SetNdivisions(506);
   Graph_Graph91->GetXaxis()->SetLabelFont(132);
   Graph_Graph91->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph91->GetXaxis()->SetTitleFont(132);
   Graph_Graph91->GetYaxis()->SetNdivisions(506);
   Graph_Graph91->GetYaxis()->SetLabelFont(132);
   Graph_Graph91->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph91->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph91->GetYaxis()->SetTitleFont(132);
   Graph_Graph91->GetZaxis()->SetLabelFont(132);
   Graph_Graph91->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph91->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph91->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph91->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph91->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph91);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.90343);
   gre->SetPointError(0,0,0.0042);
   gre->SetPoint(1,5,0.89175);
   gre->SetPointError(1,0,0.00561);
   gre->SetPoint(2,7,0.90193);
   gre->SetPointError(2,0,0.00487);
   gre->SetPoint(3,10,0.87815);
   gre->SetPointError(3,0,0.00409);
   gre->SetPoint(4,15,0.86408);
   gre->SetPointError(4,0,0.00707);
   gre->SetPoint(5,20,0.82152);
   gre->SetPointError(5,0,0.00252);
   
   TH1F *Graph_Graph92 = new TH1F("Graph_Graph92","Graph",100,1.3,21.7);
   Graph_Graph92->SetMinimum(0.810137);
   Graph_Graph92->SetMaximum(0.916493);
   Graph_Graph92->SetDirectory(0);
   Graph_Graph92->SetStats(0);
   Graph_Graph92->SetLineWidth(2);
   Graph_Graph92->SetMarkerSize(1.2);
   Graph_Graph92->GetXaxis()->SetNdivisions(506);
   Graph_Graph92->GetXaxis()->SetLabelFont(132);
   Graph_Graph92->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph92->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph92->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph92->GetXaxis()->SetTitleFont(132);
   Graph_Graph92->GetYaxis()->SetNdivisions(506);
   Graph_Graph92->GetYaxis()->SetLabelFont(132);
   Graph_Graph92->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph92->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph92->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph92->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph92->GetYaxis()->SetTitleFont(132);
   Graph_Graph92->GetZaxis()->SetLabelFont(132);
   Graph_Graph92->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph92->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph92->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph92->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph92->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph92);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} #nu_{#tau} efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#7293cb");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#7293cb");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.94367);
   gre->SetPointError(0,0,0.00113);
   gre->SetPoint(1,5,0.94022);
   gre->SetPointError(1,0,0.00127);
   gre->SetPoint(2,7,0.93897);
   gre->SetPointError(2,0,0.00106);
   gre->SetPoint(3,10,0.93617);
   gre->SetPointError(3,0,0.00147);
   gre->SetPoint(4,15,0.93049);
   gre->SetPointError(4,0,0.00135);
   gre->SetPoint(5,20,0.92193);
   gre->SetPointError(5,0,0.0016);
   
   TH1F *Graph_Graph_Graph8993 = new TH1F("Graph_Graph_Graph8993","Graph",100,1.3,21.7);
   Graph_Graph_Graph8993->SetMinimum(0.917883);
   Graph_Graph_Graph8993->SetMaximum(0.947247);
   Graph_Graph_Graph8993->SetDirectory(0);
   Graph_Graph_Graph8993->SetStats(0);
   Graph_Graph_Graph8993->SetLineWidth(2);
   Graph_Graph_Graph8993->SetMarkerSize(1.2);
   Graph_Graph_Graph8993->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph8993->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph8993->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph8993->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph8993->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph8993->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph8993->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph8993->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph8993->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph8993->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph8993->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph8993->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph8993->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph8993->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph8993->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph8993->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph8993->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph8993->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph8993->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph8993);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#e1974c");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#e1974c");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.94824);
   gre->SetPointError(0,0,0.00114);
   gre->SetPoint(1,5,0.94617);
   gre->SetPointError(1,0,0.00115);
   gre->SetPoint(2,7,0.94297);
   gre->SetPointError(2,0,0.00174);
   gre->SetPoint(3,10,0.93816);
   gre->SetPointError(3,0,0.00223);
   gre->SetPoint(4,15,0.92514);
   gre->SetPointError(4,0,0.00246);
   gre->SetPoint(5,20,0.89845);
   gre->SetPointError(5,0,0.00171);
   
   TH1F *Graph_Graph_Graph9094 = new TH1F("Graph_Graph_Graph9094","Graph",100,1.3,21.7);
   Graph_Graph_Graph9094->SetMinimum(0.891476);
   Graph_Graph_Graph9094->SetMaximum(0.954644);
   Graph_Graph_Graph9094->SetDirectory(0);
   Graph_Graph_Graph9094->SetStats(0);
   Graph_Graph_Graph9094->SetLineWidth(2);
   Graph_Graph_Graph9094->SetMarkerSize(1.2);
   Graph_Graph_Graph9094->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph9094->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph9094->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9094->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9094->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9094->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph9094->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph9094->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph9094->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9094->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9094->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9094->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph9094->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph9094->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph9094->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9094->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9094->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9094->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph9094->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph9094);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#83ba5b");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#83ba5b");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.93607);
   gre->SetPointError(0,0,0.00161);
   gre->SetPoint(1,5,0.93446);
   gre->SetPointError(1,0,0.0018);
   gre->SetPoint(2,7,0.92923);
   gre->SetPointError(2,0,0.00267);
   gre->SetPoint(3,10,0.91594);
   gre->SetPointError(3,0,0.00198);
   gre->SetPoint(4,15,0.8927);
   gre->SetPointError(4,0,0.00309);
   gre->SetPoint(5,20,0.85026);
   gre->SetPointError(5,0,0.00309);
   
   TH1F *Graph_Graph_Graph9195 = new TH1F("Graph_Graph_Graph9195","Graph",100,1.3,21.7);
   Graph_Graph_Graph9195->SetMinimum(0.838119);
   Graph_Graph_Graph9195->SetMaximum(0.946731);
   Graph_Graph_Graph9195->SetDirectory(0);
   Graph_Graph_Graph9195->SetStats(0);
   Graph_Graph_Graph9195->SetLineWidth(2);
   Graph_Graph_Graph9195->SetMarkerSize(1.2);
   Graph_Graph_Graph9195->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph9195->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph9195->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9195->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9195->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9195->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph9195->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph9195->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph9195->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9195->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9195->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9195->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph9195->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph9195->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph9195->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9195->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9195->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9195->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph9195->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph9195);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#d35e60");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#d35e60");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,3,0.90343);
   gre->SetPointError(0,0,0.0042);
   gre->SetPoint(1,5,0.89175);
   gre->SetPointError(1,0,0.00561);
   gre->SetPoint(2,7,0.90193);
   gre->SetPointError(2,0,0.00487);
   gre->SetPoint(3,10,0.87815);
   gre->SetPointError(3,0,0.00409);
   gre->SetPoint(4,15,0.86408);
   gre->SetPointError(4,0,0.00707);
   gre->SetPoint(5,20,0.82152);
   gre->SetPointError(5,0,0.00252);
   
   TH1F *Graph_Graph_Graph9296 = new TH1F("Graph_Graph_Graph9296","Graph",100,1.3,21.7);
   Graph_Graph_Graph9296->SetMinimum(0.810137);
   Graph_Graph_Graph9296->SetMaximum(0.916493);
   Graph_Graph_Graph9296->SetDirectory(0);
   Graph_Graph_Graph9296->SetStats(0);
   Graph_Graph_Graph9296->SetLineWidth(2);
   Graph_Graph_Graph9296->SetMarkerSize(1.2);
   Graph_Graph_Graph9296->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph9296->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph9296->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9296->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9296->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9296->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph9296->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph9296->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph9296->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9296->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9296->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9296->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph9296->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph9296->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph9296->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph9296->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph9296->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph9296->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph9296->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph9296);
   
   multigraph->Add(gre,"");
   multigraph->Draw("");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #pi^{-} #nu_{#tau} efficiency");
   multigraph->GetYaxis()->SetNdivisions(506);
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelOffset(0.015);
   multigraph->GetYaxis()->SetLabelSize(0.05);
   multigraph->GetYaxis()->SetTitleSize(0.05);
   multigraph->GetYaxis()->SetTitleOffset(1.5);
   multigraph->GetYaxis()->SetTitleFont(132);
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
