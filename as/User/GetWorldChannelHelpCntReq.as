package com.sanguo.game.server.connectlogic.common.message.User
{
	import laya.utils.Byte;
	public class GetWorldChannelHelpCntReq
	{
		public static const PROTO:String = "User.GetWorldChannelHelpCntReq";
		public var package_root:*;
		public  var message:*;
		public function GetWorldChannelHelpCntReq(root:*)
		{
			package_root = root;
			message = root.lookup(PROTO);
		}
		public function serialize():*
		{
			var serializeObj:Object = {};
			return serializeObj;
		}
		public function unserialize(msgObj:*):GetWorldChannelHelpCntReq
		{
			return this;
		}
		public function encode():* 
		{
			return message.encode(serialize()).finish();
		}
		public function decode(buffer:*):GetWorldChannelHelpCntReq
		{
			var msg:* = message.decode(buffer);
			return unserialize(msg);
		}
	}
}