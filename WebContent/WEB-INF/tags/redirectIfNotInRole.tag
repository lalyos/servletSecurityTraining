<%@ tag language="java" pageEncoding="UTF-8"%>
<%@ attribute name="role" description="" required="true" type="java.lang.String" %>
<%@ attribute name="redirectUrl" description="" required="true" type="java.lang.String" %>

<%
String role = (String) jspContext.getAttribute("role");
String redirectUrl = (String) jspContext.getAttribute("redirectUrl");
Boolean hasRole = request.isUserInRole(role);
if (! hasRole) {
    response.sendRedirect("/" + application.getServletContextName() + redirectUrl);
}
%>
