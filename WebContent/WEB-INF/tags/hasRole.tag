<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="c" %>
<%@ tag language="java" pageEncoding="UTF-8" body-content="scriptless"%>
<%@ attribute name="role" description="" required="true" type="java.lang.String" %>

<%
String role = (String) jspContext.getAttribute("role");
Boolean hasRole = request.isUserInRole(role);
jspContext.setAttribute("hasRole", hasRole);
%>
<c:if test="${hasRole}">
  <jsp:doBody />
</c:if>
