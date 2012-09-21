<%
session.invalidate();
response.sendRedirect(application.getContextPath() + "/farwell.jsp");
%>
