{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Jan  9 15:10:11 2017) by ROOT version5.34/05
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
   gre->SetPoint(0,3,0.92719);
   gre->SetPointError(0,0,0.00088);
   gre->SetPoint(1,5,0.93296);
   gre->SetPointError(1,0,0.00064);
   gre->SetPoint(2,7,0.93027);
   gre->SetPointError(2,0,0.00066);
   gre->SetPoint(3,10,0.92968);
   gre->SetPointError(3,0,0.00084);
   gre->SetPoint(4,15,0.92835);
   gre->SetPointError(4,0,0.00067);
   gre->SetPoint(5,20,0.91995);
   gre->SetPointError(5,0,0.00085);
   
   TH1F *Graph_Graph33 = new TH1F("Graph_Graph33","Graph",100,1.3,21.7);
   Graph_Graph33->SetMinimum(0.91765);
   Graph_Graph33->SetMaximum(0.93505);
   Graph_Graph33->SetDirectory(0);
   Graph_Graph33->SetStats(0);
   Graph_Graph33->SetLineWidth(2);
   Graph_Graph33->SetMarkerSize(1.2);
   Graph_Graph33->GetXaxis()->SetNdivisions(506);
   Graph_Graph33->GetXaxis()->SetLabelFont(132);
   Graph_Graph33->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph33->GetXaxis()->SetTitleFont(132);
   Graph_Graph33->GetYaxis()->SetNdivisions(506);
   Graph_Graph33->GetYaxis()->SetLabelFont(132);
   Graph_Graph33->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph33->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph33->GetYaxis()->SetTitleFont(132);
   Graph_Graph33->GetZaxis()->SetLabelFont(132);
   Graph_Graph33->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph33->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph33->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph33->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph33->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph33);
   
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
   gre->SetPoint(0,3,0.92799);
   gre->SetPointError(0,0,0.00066);
   gre->SetPoint(1,5,0.93647);
   gre->SetPointError(1,0,0.00062);
   gre->SetPoint(2,7,0.9301);
   gre->SetPointError(2,0,0.0012);
   gre->SetPoint(3,10,0.92719);
   gre->SetPointError(3,0,0.00066);
   gre->SetPoint(4,15,0.9155);
   gre->SetPointError(4,0,0.00131);
   gre->SetPoint(5,20,0.90866);
   gre->SetPointError(5,0,0.00086);
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Graph",100,1.3,21.7);
   Graph_Graph34->SetMinimum(0.904871);
   Graph_Graph34->SetMaximum(0.940019);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);
   Graph_Graph34->SetLineWidth(2);
   Graph_Graph34->SetMarkerSize(1.2);
   Graph_Graph34->GetXaxis()->SetNdivisions(506);
   Graph_Graph34->GetXaxis()->SetLabelFont(132);
   Graph_Graph34->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph34->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph34->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph34->GetXaxis()->SetTitleFont(132);
   Graph_Graph34->GetYaxis()->SetNdivisions(506);
   Graph_Graph34->GetYaxis()->SetLabelFont(132);
   Graph_Graph34->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph34->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph34->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph34->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph34->GetYaxis()->SetTitleFont(132);
   Graph_Graph34->GetZaxis()->SetLabelFont(132);
   Graph_Graph34->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph34->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph34->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph34->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph34->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph34);
   
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
   gre->SetPoint(0,3,0.92429);
   gre->SetPointError(0,0,0.00068);
   gre->SetPoint(1,5,0.92124);
   gre->SetPointError(1,0,0.0007);
   gre->SetPoint(2,7,0.91514);
   gre->SetPointError(2,0,0.00108);
   gre->SetPoint(3,10,0.90848);
   gre->SetPointError(3,0,0.00074);
   gre->SetPoint(4,15,0.90028);
   gre->SetPointError(4,0,0.00147);
   gre->SetPoint(5,20,0.90982);
   gre->SetPointError(5,0,0.00087);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Graph",100,1.3,21.7);
   Graph_Graph35->SetMinimum(0.896194);
   Graph_Graph35->SetMaximum(0.927586);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);
   Graph_Graph35->SetLineWidth(2);
   Graph_Graph35->SetMarkerSize(1.2);
   Graph_Graph35->GetXaxis()->SetNdivisions(506);
   Graph_Graph35->GetXaxis()->SetLabelFont(132);
   Graph_Graph35->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph35->GetXaxis()->SetTitleFont(132);
   Graph_Graph35->GetYaxis()->SetNdivisions(506);
   Graph_Graph35->GetYaxis()->SetLabelFont(132);
   Graph_Graph35->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph35->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph35->GetYaxis()->SetTitleFont(132);
   Graph_Graph35->GetZaxis()->SetLabelFont(132);
   Graph_Graph35->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph35->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph35->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph35->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph35->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph35);
   
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
   gre->SetPoint(0,3,0.90083);
   gre->SetPointError(0,0,0.00078);
   gre->SetPoint(1,5,0.89972);
   gre->SetPointError(1,0,0.00077);
   gre->SetPoint(2,7,0.89488);
   gre->SetPointError(2,0,0.00177);
   gre->SetPoint(3,10,0.9049);
   gre->SetPointError(3,0,0.00109);
   gre->SetPoint(4,15,0.90806);
   gre->SetPointError(4,0,0.00132);
   gre->SetPoint(5,20,0.91621);
   gre->SetPointError(5,0,0.0009);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Graph",100,1.3,21.7);
   Graph_Graph36->SetMinimum(0.89071);
   Graph_Graph36->SetMaximum(0.91951);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);
   Graph_Graph36->SetLineWidth(2);
   Graph_Graph36->SetMarkerSize(1.2);
   Graph_Graph36->GetXaxis()->SetNdivisions(506);
   Graph_Graph36->GetXaxis()->SetLabelFont(132);
   Graph_Graph36->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph36->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph36->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph36->GetXaxis()->SetTitleFont(132);
   Graph_Graph36->GetYaxis()->SetNdivisions(506);
   Graph_Graph36->GetYaxis()->SetLabelFont(132);
   Graph_Graph36->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph36->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph36->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph36->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph36->GetYaxis()->SetTitleFont(132);
   Graph_Graph36->GetZaxis()->SetLabelFont(132);
   Graph_Graph36->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph36->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph36->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph36->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph36->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph36);
   
   multigraph->Add(gre,"");
   multigraph->Draw("APl");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #rho(#pi^{-}#pi^{0}) #nu_{#tau} efficiency");
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
   gre->SetPoint(0,3,0.92719);
   gre->SetPointError(0,0,0.00088);
   gre->SetPoint(1,5,0.93296);
   gre->SetPointError(1,0,0.00064);
   gre->SetPoint(2,7,0.93027);
   gre->SetPointError(2,0,0.00066);
   gre->SetPoint(3,10,0.92968);
   gre->SetPointError(3,0,0.00084);
   gre->SetPoint(4,15,0.92835);
   gre->SetPointError(4,0,0.00067);
   gre->SetPoint(5,20,0.91995);
   gre->SetPointError(5,0,0.00085);
   
   TH1F *Graph_Graph_Graph3337 = new TH1F("Graph_Graph_Graph3337","Graph",100,1.3,21.7);
   Graph_Graph_Graph3337->SetMinimum(0.91765);
   Graph_Graph_Graph3337->SetMaximum(0.93505);
   Graph_Graph_Graph3337->SetDirectory(0);
   Graph_Graph_Graph3337->SetStats(0);
   Graph_Graph_Graph3337->SetLineWidth(2);
   Graph_Graph_Graph3337->SetMarkerSize(1.2);
   Graph_Graph_Graph3337->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph3337->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph3337->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3337->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3337->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3337->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph3337->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph3337->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph3337->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3337->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3337->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3337->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph3337->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph3337->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph3337->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3337->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3337->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3337->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph3337->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph3337);
   
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
   gre->SetPoint(0,3,0.92799);
   gre->SetPointError(0,0,0.00066);
   gre->SetPoint(1,5,0.93647);
   gre->SetPointError(1,0,0.00062);
   gre->SetPoint(2,7,0.9301);
   gre->SetPointError(2,0,0.0012);
   gre->SetPoint(3,10,0.92719);
   gre->SetPointError(3,0,0.00066);
   gre->SetPoint(4,15,0.9155);
   gre->SetPointError(4,0,0.00131);
   gre->SetPoint(5,20,0.90866);
   gre->SetPointError(5,0,0.00086);
   
   TH1F *Graph_Graph_Graph3438 = new TH1F("Graph_Graph_Graph3438","Graph",100,1.3,21.7);
   Graph_Graph_Graph3438->SetMinimum(0.904871);
   Graph_Graph_Graph3438->SetMaximum(0.940019);
   Graph_Graph_Graph3438->SetDirectory(0);
   Graph_Graph_Graph3438->SetStats(0);
   Graph_Graph_Graph3438->SetLineWidth(2);
   Graph_Graph_Graph3438->SetMarkerSize(1.2);
   Graph_Graph_Graph3438->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph3438->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph3438->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3438->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3438->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3438->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph3438->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph3438->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph3438->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3438->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3438->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3438->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph3438->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph3438->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph3438->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3438->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3438->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3438->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph3438->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph3438);
   
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
   gre->SetPoint(0,3,0.92429);
   gre->SetPointError(0,0,0.00068);
   gre->SetPoint(1,5,0.92124);
   gre->SetPointError(1,0,0.0007);
   gre->SetPoint(2,7,0.91514);
   gre->SetPointError(2,0,0.00108);
   gre->SetPoint(3,10,0.90848);
   gre->SetPointError(3,0,0.00074);
   gre->SetPoint(4,15,0.90028);
   gre->SetPointError(4,0,0.00147);
   gre->SetPoint(5,20,0.90982);
   gre->SetPointError(5,0,0.00087);
   
   TH1F *Graph_Graph_Graph3539 = new TH1F("Graph_Graph_Graph3539","Graph",100,1.3,21.7);
   Graph_Graph_Graph3539->SetMinimum(0.896194);
   Graph_Graph_Graph3539->SetMaximum(0.927586);
   Graph_Graph_Graph3539->SetDirectory(0);
   Graph_Graph_Graph3539->SetStats(0);
   Graph_Graph_Graph3539->SetLineWidth(2);
   Graph_Graph_Graph3539->SetMarkerSize(1.2);
   Graph_Graph_Graph3539->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph3539->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph3539->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3539->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3539->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3539->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph3539->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph3539->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph3539->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3539->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3539->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3539->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph3539->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph3539->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph3539->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3539->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3539->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3539->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph3539->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph3539);
   
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
   gre->SetPoint(0,3,0.90083);
   gre->SetPointError(0,0,0.00078);
   gre->SetPoint(1,5,0.89972);
   gre->SetPointError(1,0,0.00077);
   gre->SetPoint(2,7,0.89488);
   gre->SetPointError(2,0,0.00177);
   gre->SetPoint(3,10,0.9049);
   gre->SetPointError(3,0,0.00109);
   gre->SetPoint(4,15,0.90806);
   gre->SetPointError(4,0,0.00132);
   gre->SetPoint(5,20,0.91621);
   gre->SetPointError(5,0,0.0009);
   
   TH1F *Graph_Graph_Graph3640 = new TH1F("Graph_Graph_Graph3640","Graph",100,1.3,21.7);
   Graph_Graph_Graph3640->SetMinimum(0.89071);
   Graph_Graph_Graph3640->SetMaximum(0.91951);
   Graph_Graph_Graph3640->SetDirectory(0);
   Graph_Graph_Graph3640->SetStats(0);
   Graph_Graph_Graph3640->SetLineWidth(2);
   Graph_Graph_Graph3640->SetMarkerSize(1.2);
   Graph_Graph_Graph3640->GetXaxis()->SetNdivisions(506);
   Graph_Graph_Graph3640->GetXaxis()->SetLabelFont(132);
   Graph_Graph_Graph3640->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3640->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3640->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3640->GetXaxis()->SetTitleFont(132);
   Graph_Graph_Graph3640->GetYaxis()->SetNdivisions(506);
   Graph_Graph_Graph3640->GetYaxis()->SetLabelFont(132);
   Graph_Graph_Graph3640->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3640->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3640->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3640->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph3640->GetYaxis()->SetTitleFont(132);
   Graph_Graph_Graph3640->GetZaxis()->SetLabelFont(132);
   Graph_Graph_Graph3640->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph_Graph3640->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph3640->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph3640->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph3640->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph_Graph3640);
   
   multigraph->Add(gre,"");
   multigraph->Draw("");
   multigraph->GetXaxis()->SetTitle("ECal Cell Size /mm");
   multigraph->GetXaxis()->SetNdivisions(506);
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelOffset(0.015);
   multigraph->GetXaxis()->SetLabelSize(0.05);
   multigraph->GetXaxis()->SetTitleSize(0.05);
   multigraph->GetXaxis()->SetTitleFont(132);
   multigraph->GetYaxis()->SetTitle("#tau^{-}#rightarrow #rho(#pi^{-}#pi^{0}) #nu_{#tau} efficiency");
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
