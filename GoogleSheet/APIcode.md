function getLastLog() {
  var spreadsheetId = '1sMb1F1_k83sVMTg7BwgTPAXaqRnF-OmYUA6L6Ab0FKo';
  var sheetName = '시트1'; // 시트 이름을 원하는 대로 변경
  var sheet = SpreadsheetApp.openById(spreadsheetId).getSheetByName(sheetName);
  var lastRow = sheet.getLastRow();
  var lastLog = sheet.getRange('A' + lastRow).getValue(); // A 열에 저장된 마지막 로그 번호를 가져옴
  return lastLog;
}

function doPost(e) {
  var spreadsheetId = '1sMb1F1_k83sVMTg7BwgTPAXaqRnF-OmYUA6L6Ab0FKo';
  var sheetName = '시트1'; // 시트 이름을 원하는 대로 변경
  var sheet = SpreadsheetApp.openById(spreadsheetId).getSheetByName(sheetName);
  
  // 요청에서 데이터 추출
  var postData = JSON.parse(e.postData.contents);
  var sign = postData.접속신호; 
  var playerID = postData.플레이어ID; 
  var logintime = postData.접속일시; 
  var wallet = postData.소지금;
  var nowlevel = postData.현재단계;
  var futurelevel = postData.도전단계;
  var choice = postData.선택;
  var success = postData.성공여부; 
  var itemName = postData.구매가구; 
  var homemoney = postData.집값;
  var sell = postData.집판매;
  var charge = postData.충전금액;
  var nowtime = postData.시간;
  var lastLog = getLastLog(); // 마지막 로그 번호를 가져옴
  var nextLog = lastLog + 1; // 다음 로그 번호 계산
  
  // 시트의 마지막 행에 데이터 추가
  sheet.appendRow([nextLog, sign, playerID, logintime, wallet, nowlevel, futurelevel, choice, success, itemName, homemoney, sell, charge, nowtime]);
  
  // 응답
  return ContentService.createTextOutput('Data saved successfully. Last Log: ' + nextLog);
}

