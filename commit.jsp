<%@ page language="java" contentType="text/html; charset=EUC-KR"
    pageEncoding="UTF-8"%>
<%
	String r = "실패?";
	int p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0;
	try {
		p1 = Integer.parseInt(request.getParameter("p1"));
		p2 = Integer.parseInt(request.getParameter("p2"));
		p3 = Integer.parseInt(request.getParameter("p3"));
		p4 = Integer.parseInt(request.getParameter("p4"));
		p5 = Integer.parseInt(request.getParameter("p5"));
		p6 = Integer.parseInt(request.getParameter("p6"));
		p7 = Integer.parseInt(request.getParameter("p7"));
		String returns = connectDB.connectionDB(p1,p2,p3,p4,p5,p6,p7);
		r = "성공!";
	} catch(Exception e) {
		
	}
	System.out.println("실행 결과 : " + r);
%>

<!doctype html>
<html class="">
<head>
  <meta charset="UTF-8">
  <title>출석 확인 완료</title>
</head>
<body>
	<p> <%=p1%> 학생, 수업 듣느라 고생 많으셨습니다^^</p><br/>
	<p> <%=p3%>:<%=p4%>~<%=p5%>:<%=p6%> 시간에 있었던 </p><br/>
	<p> <%=p2%> 강의실 수업 출석이 <%=p7/360%>% 확인되었습니다.</p><br/>
	<p> 남은 학기 열심히 지내세요. </p>
</body>
</html>
