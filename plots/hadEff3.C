{
//=========Macro generated from canvas: c1/
//=========  (Tue Feb 21 15:14:34 2017) by ROOT version5.34/05
   TCanvas *c1 = new TCanvas("c1", "",1014,196,800,700);
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
   multigraph->SetName("");
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
   gre->SetPoint(0,3,0.9162746);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,5,0.9262936);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7,0.9273005);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,10,0.9287582);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,15,0.9234197);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,20,0.9067064);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","Graph",100,1.3,21.7);
   Graph_Graph65->SetMinimum(0.9045012);
   Graph_Graph65->SetMaximum(0.9309634);
   Graph_Graph65->SetDirectory(0);
   Graph_Graph65->SetStats(0);
   Graph_Graph65->SetLineWidth(2);
   Graph_Graph65->SetMarkerSize(1.2);
   Graph_Graph65->GetXaxis()->SetNdivisions(506);
   Graph_Graph65->GetXaxis()->SetLabelFont(132);
   Graph_Graph65->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph65->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph65->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph65->GetXaxis()->SetTitleFont(132);
   Graph_Graph65->GetYaxis()->SetNdivisions(506);
   Graph_Graph65->GetYaxis()->SetLabelFont(132);
   Graph_Graph65->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph65->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph65->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph65->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph65->GetYaxis()->SetTitleFont(132);
   Graph_Graph65->GetZaxis()->SetLabelFont(132);
   Graph_Graph65->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph65->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph65->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph65->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph65->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph65);
   
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
   gre->SetPoint(0,3,0.9137288);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,5,0.9302142);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7,0.9237409);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,10,0.9191295);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,15,0.8977789);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,20,0.8565613);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph66 = new TH1F("Graph_Graph66","Graph",100,1.3,21.7);
   Graph_Graph66->SetMinimum(0.849196);
   Graph_Graph66->SetMaximum(0.9375794);
   Graph_Graph66->SetDirectory(0);
   Graph_Graph66->SetStats(0);
   Graph_Graph66->SetLineWidth(2);
   Graph_Graph66->SetMarkerSize(1.2);
   Graph_Graph66->GetXaxis()->SetNdivisions(506);
   Graph_Graph66->GetXaxis()->SetLabelFont(132);
   Graph_Graph66->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph66->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph66->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph66->GetXaxis()->SetTitleFont(132);
   Graph_Graph66->GetYaxis()->SetNdivisions(506);
   Graph_Graph66->GetYaxis()->SetLabelFont(132);
   Graph_Graph66->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph66->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph66->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph66->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph66->GetYaxis()->SetTitleFont(132);
   Graph_Graph66->GetZaxis()->SetLabelFont(132);
   Graph_Graph66->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph66->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph66->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph66->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph66->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph66);
   
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
   gre->SetPoint(0,3,0.9061572);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,5,0.9024128);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7,0.8831693);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,10,0.8509085);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,15,0.8090138);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,20,0.7730086);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph67 = new TH1F("Graph_Graph67","Graph",100,1.3,21.7);
   Graph_Graph67->SetMinimum(0.7596938);
   Graph_Graph67->SetMaximum(0.919472);
   Graph_Graph67->SetDirectory(0);
   Graph_Graph67->SetStats(0);
   Graph_Graph67->SetLineWidth(2);
   Graph_Graph67->SetMarkerSize(1.2);
   Graph_Graph67->GetXaxis()->SetNdivisions(506);
   Graph_Graph67->GetXaxis()->SetLabelFont(132);
   Graph_Graph67->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph67->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph67->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph67->GetXaxis()->SetTitleFont(132);
   Graph_Graph67->GetYaxis()->SetNdivisions(506);
   Graph_Graph67->GetYaxis()->SetLabelFont(132);
   Graph_Graph67->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph67->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph67->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph67->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph67->GetYaxis()->SetTitleFont(132);
   Graph_Graph67->GetZaxis()->SetLabelFont(132);
   Graph_Graph67->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph67->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph67->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph67->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph67->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph67);
   
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
   gre->SetPoint(0,3,0.8578912);
   gre->SetPointError(0,0,0);
   gre->SetPoint(1,5,0.8330225);
   gre->SetPointError(1,0,0);
   gre->SetPoint(2,7,0.8057668);
   gre->SetPointError(2,0,0);
   gre->SetPoint(3,10,0.7879136);
   gre->SetPointError(3,0,0);
   gre->SetPoint(4,15,0.769266);
   gre->SetPointError(4,0,0);
   gre->SetPoint(5,20,0.7494801);
   gre->SetPointError(5,0,0);
   
   TH1F *Graph_Graph68 = new TH1F("Graph_Graph68","Graph",100,1.3,21.7);
   Graph_Graph68->SetMinimum(0.738639);
   Graph_Graph68->SetMaximum(0.8687323);
   Graph_Graph68->SetDirectory(0);
   Graph_Graph68->SetStats(0);
   Graph_Graph68->SetLineWidth(2);
   Graph_Graph68->SetMarkerSize(1.2);
   Graph_Graph68->GetXaxis()->SetNdivisions(506);
   Graph_Graph68->GetXaxis()->SetLabelFont(132);
   Graph_Graph68->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph68->GetXaxis()->SetTitleFont(132);
   Graph_Graph68->GetYaxis()->SetNdivisions(506);
   Graph_Graph68->GetYaxis()->SetLabelFont(132);
   Graph_Graph68->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph68->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph68->GetYaxis()->SetTitleFont(132);
   Graph_Graph68->GetZaxis()->SetLabelFont(132);
   Graph_Graph68->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph68->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph68->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph68->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph68->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph68);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#epsilon_{had}");
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
